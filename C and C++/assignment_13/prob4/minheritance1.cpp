/*
CH-230-A
a13_p4.cpp
Suraj Giri
s.giri@jacobs-university.de
*/

#include <iostream>
using namespace std;

class A
{
    int x;

public:
    void setX(int i) { x = i; }
    void print() { cout << x; }
};

class B : public virtual A
{
public:
    B() { setX(10); }
};

class C : public virtual A
{
public:
    C() { setX(20); }
};

class D : public B, public C
{
public:
    D() { setX(40); }
};

int main()
{
    D d;
    d.print();
    return 0;
}

/* 
************************
Errors
************************
1. The print method for class D is shown as ambiguous because it is inherited
from two classes: B and C. print method is declared for the parent class A of
which classes A, B and C are childs. And in the case of class D, as it is the
child of both B and C, compiler can't decide from which parent class, B or C,
print method is to be called which finally leads to ambiguity.

************************
Solution
************************
1. To solve the problem of ambiguity in our code, we need to call the
print method as a virtual method from the classes B and C for which base class
A also needs to be called as a virtual in B and C so that B and C would be the
virtual classes of the base class A. This will finally solve the ambiguity of
setX.
 
There is also one more possibility: to directly declare class D as direct
child of base class A which would directly call the print method without any
problem of ambiguity but it would not be the optimal solution to our question
as it would not solve the ambiguity of setX
*/