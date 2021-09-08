/*
CH-230-A
a11_p6.cpp
Suraj Giri
s.giri@jacobs-university.de
*/
/*file: Vector.cpp*/

#include <iostream>
#include "Vector.h"

using namespace std;

Vector::Vector()
{
    Components = new double[this->size];
}

/*declaring a constructor that would take input for the vector till the size of 
vector*/
Vector::Vector(int size)
{
    Components = new double[this->size];
    for (int i = 0; i < (this->size); i++)
    {
        cin >> Components[i];
    }
}
//Vector::Vector(int newsize,double *mem_location)

//allocating memory for the vectors in the vector class
Vector::Vector(int, double)
{
    double *mem_location = new double[size];
}

//destructor for the vector class
Vector::~Vector()
{
    delete[] Components;
}

//setter for the size of vector
int Vector::setSize(int s)
{
    size = s;
}

//getter for the size of the vector
int Vector::getSize()
{
    return this->size;
}

//getter for the components of vector
double Vector::getComponents(int position)
{
    double tempvar = Components[position];
    return tempvar;
}

//setter for the components of the vector
double Vector::setComponents(int i; double c)
{
    this->Components[i] = c;
}

//Copy constructor for all the components of the vector
Vector::Vector(const Vector &copy)
{
    Components = new double[this->size];
    for (int i = 0; i < (this->size); i++)
    {
        Components[i] = copy.Components[i];
    }
}

//method for calculating the norm
double Vector::norm()
{
    double tempvar;
    for (int i = 0; i < size; i++)
    {
        tempvar += (Components[i] * Components[i]);
    }
}

//method for adding two vectors
Vector Vector ::add(Vector copy)
{
    double tempvar;
    int i;
    for (i = 0; i < size; i++)
    {
        tempvar.Components[i] = Components[i] + copy.getComponents(i);
    }
    return tempvar;
}

//method for subtracting two vectors
Vector Vector:: subtr(Vector copy)
{
    double tempvar;
    int i;
    for (i = 0; i < size; i++)
    {
        tempvar.Components[i] = Components[i] - copy.getComponents(i);
    }
    return tempvar;
}

//method for calculating the scalar product of two vectors
double Vector::ScalarProd(Vector copy)
{
    int i;
    double tempvar;
    for (i = 0; i < size; i++)
    {
        tempvar += (Components[i] * copy.getComponents(i));
    }
    return tempvar;
}

//method for printing the results of the calculations of the two vectors
void Vector::print() const
{
    int i;
    for (i = 0; i < size; i++)
    {
        cout << Components[i] << " "<< endl;
    }
}

