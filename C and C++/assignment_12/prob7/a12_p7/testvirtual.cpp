/*
CH-230-A
a12_p7.cpp
Suraj Giri
s.giri@jacobs-university.de
*/
/*testvirtual.cpp*/

#include <iostream>
using namespace std;
#include "Area.h"
#include "Circle.h"
#include "Ring.h"
#include "Rectangle.h"
#include "Square.h"
#include <time.h>

const int num_obj = 25;

//declaring a function to generate random colour
const char *randColour()
{
	const char *Colour[] = {"RED", "BLACK", "VIOLET", "BLUE"};
	int randomNumc;
	randomNumc = rand() % 4;
	return Colour[randomNumc];
}

//main function to create 25 random objects
int main()
{
	Area *list[num_obj]; // creating an object with pointer
	int counter = 0;
	srand(static_cast<unsigned int>(time(0)));

	//loop to create random objects with random parameters
	while (counter < num_obj)
	{
		const char *color = randColour();
		double outrad = rand() % 100 + 5;
		double inrad = rand() % 100 + 5;
		int randobj = rand() % 4;
		switch (randobj)
		{
		case 0:
			list[counter] = new Rectangle(color, outrad, inrad);
			break;
		case 1:
			list[counter] = new Square(color, outrad);
			break;
		case 2:
			list[counter] = new Circle(color, outrad);
			break;
		case 3:
			/*if the inner radius of the ring is greater than the outer radius, 
			swapping their values*/

			if (outrad < inrad)
			{
				double temp = outrad;
				outrad = inrad;
				inrad = temp;
			}
			list[counter] = new Ring(color, outrad, inrad);
			break;
		}
		counter++;
	}
	double sum_area = 0.0; // Initializing the value of sum of area/
	double sum_perimeter = 0.0;

	int indexa = 0;
	while (indexa < num_obj)
	{ // creating a loop for going through every object in the list
		(list[indexa])->getColor();
		double area = list[indexa++]->calcArea(); /* calculating the area of 
													every object in the list*/
		sum_area += area;
	}

	int indexp = 0;
	while (indexp < num_obj)
	{
		(list[indexp])->getColor();
		double perimeter = list[indexp++]->calcPerimeter(); // calculating the perimeter of
															//every object in the list*/
		sum_perimeter += perimeter;
	}
	cout << "\nThe total area is "
		 << sum_area << " units " << endl; // printing the total sum of the areas

	cout << "\nThe total perimeter is "
		 << sum_perimeter << " units " << endl; // printing the total sum of the perimeters

	return 0;
}

/*
                       ****** Relation between the classes ******
				========================================================

                                  +------------+
                                  |   Area     |
                                  +-----+------+
                                        |
                                        |
                                        |
                       +----------------+------------------+
                       |                                   |
                       |                                   |
                       |                                   |
                +-------------+                   +----------------+
                |             |                   |                |
                |   circle    |                   |    rectancle   |
                |             |                   |                |
                +-----+-------+                   +----------------+
                      |
                      |
               +--------------+
               |              |
               |    Ring      |
               |              |
               +--------------+
*/




/*const char *randNumber()
{
	srand(time(NULL));
	int num = rand() % 100 + 5;
	return num;
}*/
/*const char *randShape()
{
	const char *Shape[] = {"circle", "ring", "rectangle", "square"};
	int randomNums;
	randomNums = rand() % 4;
	return Shape[randomNums];
}*/