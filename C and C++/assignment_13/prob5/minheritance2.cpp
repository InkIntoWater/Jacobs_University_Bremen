/*
CH-230-A
a13_p5.cpp
Suraj Giri
s.giri@jacobs-university.de
*/

#include <iostream>
using namespace std;

class A
{
    int x;

public:
    A(int i) { x = i; }
    void print() { cout << x; }
};

class B : virtual public A
{
public:
    B() : A(10) {}
};

class C : virtual public A
{
public:
    C() : A(10) {}
};

class D : public B, public C
{
public:
    D() : A(10) {}
};

int main()
{
    D d;
    d.print();
    return 0;
}

/*
************************
ERRORS
************************
1. In the given problem, the program shows the error because the code has 
a no any constructors declared in class D, which means that it defaults
to A's default constructor which is not defined due to which although compiler
generates a default constructor in A, it is deleted automatically. So the 
default constructor for D can't be executed and it shows error.

To solve this problem, either we need to declare a default constructor in base
class A or we need to declare a parametric constructor for derived class D.

************************
Solution
************************
1. To solve the error in this code, either we need to call the parametric 
constructor of the base class i.e. class A or declare a default 
constructor in class A.
I just called the parametric constructor of class A in this code.
Providing the default constructor in class A would not provide desired 
value as output.
*/