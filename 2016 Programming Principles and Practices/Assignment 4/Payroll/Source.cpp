/*
Justin Seda
Design a PayRoll class that has data members for an employee’s hourly pay rate, number of hours worked, and total pay for the week. Write a program  with an array of seven PayRoll objects . The program should ask the user for the number of hours each employee has worked and will then display the amount of gross pay each has earned.
*/
#include <iostream>
#include <iomanip>

using namespace std;

class PayRoll //PayRoll class
{
private: //private data members
	double hpr; // employee’s hourly pay rate
	double wHours; //number of hours worked
public://public data members
	PayRoll(); //constructor
			   //mutator and accessor 
	void setHpr(double payRate);
	void setWHours(double hours);
	double getHpr();
	double getWHours();
	double getGross();
};

int main()
{
	const int EMPLOYEES = 7;
	PayRoll arr[EMPLOYEES];
	double  payRate;
	double hours;
	int i;
	cout << fixed << showpoint << setprecision(2);

	cout << "Creating 7 Payroll objects." << endl;  //output
	for (i = 0; i < EMPLOYEES; i++)
	{
		cout << "Enter the # " << i << " employee's rate of pay per hour:"; //gets employee's rate of pay per hour
		cin >> payRate;
		arr[i].setHpr(payRate);

		cout << "Enter the # " << i << " employee's hours worked for the week:";// gets employee's hours worked for the week
		cin >> hours;
		if (hours <= 60)// hour cant be greater than 60
		{
			arr[i].setWHours(hours);
		}
		else //if it is, then it automatically changes to 60
		{

			arr[i].setWHours(60);
		}

	}

	cout << "" << endl << "" << endl;

	for (i = 0; i < EMPLOYEES; i++)
	{
		cout << "Employee # " << i << " worked " << arr[i].getWHours() << " hours at $" << arr[i].getHpr() << " for a gross pay of $" << arr[i].getGross() << endl; //outputs everything with gross pay 
	}

	system("pause");
	return 0;
}

//mutator and accessor function
PayRoll::PayRoll() //constructor
{
	hpr = 0;
	wHours = 0;
}

void PayRoll::setHpr(double payRate)//
{
	hpr = payRate;
}

void PayRoll::setWHours(double hours)//
{
	wHours = hours;
}

double PayRoll::getHpr()
{
	return hpr;
}

double PayRoll::getWHours()
{
	return wHours;
}

double PayRoll::getGross()
{
	return wHours * hpr;
}