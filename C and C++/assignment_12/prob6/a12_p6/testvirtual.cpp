/*
CH-230-A
a12_p6.cpp
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

const int num_obj = 7;
int main()
{
	Area *list[num_obj];   /* creating an object with pointer 
								array from the class Area*/
	int index = 0;		   // setting the intex by initializing it
	double sum_area = 0.0; // Initializing the value of sum of area/
	double sum_perimeter = 0.0;
	cout << "Creating Ring: ";
	Ring blue_ring("BLUE", 5, 2); //Declaring a constructor for a blue ring
	cout << "Creating Circle: ";
	Circle yellow_circle("YELLOW", 7);
	cout << "Creating Rectangle: ";
	Rectangle green_rectangle("GREEN", 5, 6);
	cout << "Creating Circle: ";
	Circle red_circle("RED", 8);
	cout << "Creating Rectangle: ";
	Rectangle black_rectangle("BLACK", 10, 20);
	cout << "Creating Ring: ";
	Ring violet_ring("VIOLET", 100, 5);

	cout << "Creating Square: ";
	Square white_square("White", 5);

	list[0] = &blue_ring; /*initializing the list by setting first index of 
								  the list to blue ring*/
	list[1] = &yellow_circle;
	list[2] = &green_rectangle;
	list[3] = &red_circle;
	list[4] = &black_rectangle;
	list[5] = &violet_ring;
	list[6] = &white_square;
	while (index < num_obj)
	{ // creating a loop for going through every object in the list
		(list[index])->getColor();
		double area = list[index++]->calcArea(); /* calculating the area of 
													every object in the list*/
		sum_area += area;
	}

	int indexp=0;
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