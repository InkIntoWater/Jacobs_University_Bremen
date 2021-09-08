/*
CH-230-A
a11_p3.cpp
Suraj Giri
s.giri@jacobs-university.de
*/
/*file:Creature.h*/

//creating the class creature
class Creature
{
public:
	Creature(); //empty constructor
	void run() const; //method for the creature class
	~Creature();

protected:
	int distance;
};

//creating the class wizard
class Wizard : public Creature
{
public:
	Wizard(); //empty constructor
	void hover() const;  //method for the wizard class
	~Wizard();

private:
	int distFactor;
};

//creating the class birds
class Birds : public Creature
{
public:
	Birds(); //empty constructor
	void fly() const; //method for the birds class
	~Birds();

private:
	int flignt_num;
};

//creating the class gypsy
class Gypsy : public Creature
{
private:
	int roam_dist;

public:
	Gypsy(); //empty constructor
	void roam() const;  //method for the gypsy class
	~Gypsy();
};