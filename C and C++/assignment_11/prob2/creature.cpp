/*
CH-230-A
a11_p2.cpp
Suraj Giri
s.giri@jacobs-university.de
*/

#include <iostream>

using namespace std;

class Creature
{
public:
    Creature();
    void run() const;
    ~Creature();

protected:
    int distance;
};

Creature::Creature() : distance(10)
{
    cout << "Constructor for Creature is created.\n";
}

Creature::~Creature()
{
    cout << "Empty Destructor for Creature being called.\n";
}

void Creature::run() const
{
    cout << "running " << distance << " meters!\n";
}

class Wizard : public Creature
{
public:
    Wizard();
    void hover() const;
    ~Wizard();

private:
    int distFactor;
};

Wizard::Wizard() : distFactor(3)
{
    cout << "Constructor for Wizard is created.\n";
}

Wizard::~Wizard()
{
    cout << "Empty Destructor for wizard being called.\n";
}

void Wizard::hover() const
{
    cout << "hovering " << (distFactor * distance) << " meters!\n";
}

//Creating a birds class.
class Birds : public Creature
{
public:
    Birds();
    void fly() const;
    ~Birds();

private:
    int flignt_num;
};

//declaring a property for the derived class birds
Birds::Birds() : flignt_num(10000)
{
    cout << "Constructor for Birds is created.\n";
}

Birds::~Birds()
{
    cout << "Empty Destructor for birds being called.\n";
}

//declaring a method for the derived class birds
void Birds::fly() const
{
    cout << "flying " << (flignt_num * distance / 1000) << " kilometers!\n";
}

//Creating a Gypsy class
class Gypsy : public Creature
{
private:
    int roam_dist;

public:
    Gypsy();
    void roam() const;
    ~Gypsy();
};

//declaring a property for the derived class gypsy
Gypsy::Gypsy() : roam_dist(5000)
{
    cout << "Constructor for Gypsy is created.";
}

//declaring a method for the derived class gypsy
void Gypsy::roam() const
{
    cout << "roaming " << (roam_dist * distance / 1000) << " kilometers!\n";
}

Gypsy::~Gypsy()
{
    cout << "Empty Destructor for gypsy being called.\n"
         << endl;
}

/*main function including the class creatures and the derived classes
wizard, birds, and gypsy.
also creating instances for the classes defined above.*/
int main()
{
    //instance for creature
    cout << "Creating an Creature.\n";
    Creature c;
    c.run();

    //instance for wizard
    cout << "\nCreating a Wizard.\n";
    Wizard w;
    w.run();
    w.hover();

    //instance for birds
    cout << "\nCreating a Bird. \n";
    Birds b;
    b.run();
    b.fly();

    //instance for gypsy
    cout << "\nCreating a Gypsy.\n";
    Gypsy g;
    g.run();
    g.roam();

    //instance for wizard
    cout << "\nCreating an instance of wizard.\n";
    Wizard wi;
    wi.run();
    wi.hover();

    //instance for birds
    cout << "\nCreating an instance of a Brid.\n";
    Birds bi;
    bi.run();
    bi.fly();

    //instance for gypsy
    cout << "\nCreating an instance of a Gypsy.\n";
    Gypsy gy;
    gy.run();
    gy.roam();

    return 0;
}