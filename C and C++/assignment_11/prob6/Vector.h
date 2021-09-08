/*
CH-230-A
a11_p6.h
Suraj Giri
s.giri@jacobs-university.de
*/
/*file: Vector.h*/

class Vector
{
private:
    int size;
    //double i_component;
    //double j_component;
    //double k_component;
    double *Components;
public:
    Vector();
    Vector(int);
    //Vector(int, double);
    Vector(int, double, double, double);
    Vector(const Vector &);
    ~Vector();

    void setSize(int);
    int getSize();
    
    void setComponents(int, double);
    double getComponents(int);

    void print() const;

    double norm();
    double ScalarProd(Vector);
    Vector add(Vector);
    Vector subtr(Vector);

};
