/*
a11_p11.c
testbox.cpp
Roshan Nepal
ro.nepal@jacobs-university.de
*/

#include <iostream>
#include "Box.h"
using namespace std;

int main()
{
	cout << "Number of boxes: ";
	int n;
	cin >> n;
	double height, width, depth;

	Box* list;
	list = new Box[2*n]; 		
        //allocation of memory for 2*n boxes

	for (int i = 0; i < n; i++)		
        //collection of data for n boxes
	{
		cout << "Height of box #" << i+1 << ": ";
		cin >> height;
		cout << "Width of box #" << i+1 << ": ";
		cin >> width;
		cout << "Depth of box #" << i+1 << ": ";
		cin >> depth;

		list[i].setHeight (height);
		list[i].setWidth (width);
		list[i].setDepth (depth);
		cout << endl;
	}

	for (int i = n; i < 2 * n; i++) 
        //adding copies of existing boxes on the remainder n positions
	{
		list[i] = Box(list[i - n]);
	}

	for (int i = 0; i < 2*n; i++)	
        //printing the volume of boxes
	{
		cout << "Volme of Box #" << i+1 << " = "; 
		cout << list[i].Volume() << endl << endl;
	}

	delete [] list;
	return 0;
}