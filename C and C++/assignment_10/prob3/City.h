/*
CH-230-A
a10_p3.cpp
Suraj Giri
s.giri@jacobs-university.de
*/
/*file: City.h*/

#include <string>

class City
{
private: //data members are private
    std::string name;
    int numofinhab;
    std::string mayor;
    double area;
    
public: //public values or methods of a city
//using setter methods
    void setName(std::string newname);
    void setNumofinhab(int newnumofinhab);
    void setMayor(std::string& newmayor);
    void setArea(double newarea);

//using getter methods
    int getNumofinhab();
    double getArea();

    void print();
};
    