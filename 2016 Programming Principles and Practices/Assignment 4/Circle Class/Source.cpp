/*
Justin Seda
This program demonstrates the Circle class by asking the user for the circle’s radius, creating a Circle object , and then finding the circle’s area, diameter, and circumference.
*/
#include <iostream>
using namespace std;

class Circle //Circle class
{
private: //private data members 
	double radius;
	double pi = 3.14159;

public: //public data members
	Circle(); // Default Constructor
	Circle(double rad); //Constructor
						//mutator and accessor 
	void setRadius(double rad);
	double getRadius();
	double getArea();
	double getDiameter();
	double getCircumference();
};

int main()
{
	Circle circle; //1st circle
	Circle circle2(10); //2nd circle
	double rad;

	cout << "Calling defeault constructor: The circle's radius in the default Circle Object is: 0" << endl << "" << endl;//output Default Constructor
	cout << "Calling setRadius(20) to change radius of default:" << endl; //change radius
	circle.setRadius(20); //sets radius to 20
	cout << "The circle's radius in the default Circle Object is Now: " << circle.getRadius() << endl << "" << endl; //gets changed radius
	cout << "Creating Circle circle2(10): " << endl;
	cout << "The circle2's radius in the circle2 Object is: " << circle2.getRadius() << endl << "" << endl; //gets the 2nd circle's radius
	cout << "The circle2's area is therefore: " << circle2.getArea() << endl; //gets area for 2nd circle
	cout << "The circle2's diameter is therefore: " << circle2.getDiameter() << endl; //gets diameter for 2nd circle
	cout << "The circle2's circumference is therefore: " << circle2.getCircumference() << endl; //gets circumference for 2nd circle

	system("pause");																							//system("pause");
	return 0;
}

//mutator and accessor function
Circle::Circle() //default constructer
{
	radius = 0.0;
}

Circle::Circle(double rad) // constructer
{
	radius = rad;
}

void Circle::setRadius(double rad)
{
	radius = rad;
}

double Circle::getRadius()
{
	return radius;
}

double Circle::getArea()
{
	return pi * radius * radius;
}

double Circle::getDiameter()
{
	return radius * 2;
}

double Circle::getCircumference()
{
	return 2 * pi *radius;
}