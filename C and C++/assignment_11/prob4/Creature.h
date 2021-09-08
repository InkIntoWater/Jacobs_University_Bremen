/*
CH-230-A
a11_p4.cpp
Suraj Giri
s.giri@jacobs-university.de
*/
/*file: Creature.h*/

//creating the class creature
class Creature
{
public:
	Creature(); //empty constructor
	void run() const; //method for class creature
	~Creature();

protected:
	int distance;
};

//creating the class wizard
class Wizard : public Creature
{
public:
	Wizard(); //empty constructor
	void hover() const; //method for class Wizard
	~Wizard();

private:
	int distFactor;
};

//creating the class birds
class Birds : public Creature
{
public:
	Birds(); //empty constructor
	void fly() const;  //method for class birds
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
	void roam() const; //method for class gypsy
	~Gypsy();
};