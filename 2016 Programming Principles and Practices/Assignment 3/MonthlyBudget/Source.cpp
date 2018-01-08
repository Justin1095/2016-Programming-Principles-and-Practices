/*
Justin Seda
This program asks for the amount they spend on each expenses and displays their expenses, how much it is, what the user spend,the difference and if they are over or under budget
*/
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;



struct MonthlyBudget //all of the expenses
{
	float housing, utilities, household, transportation, food, medical,
		insurance, entertainment, clothing, miscellaneous;
};

void userAmount(MonthlyBudget &);//gets user's amount 
void compareAmount(MonthlyBudget &, MonthlyBudget &);//compares the expenses

int main()
{

	MonthlyBudget data = { 500.00, 150.00, 65.00, 50.00, 250.00, 30.00, 100.00 ,150.00, 75.00, 50.00 }; //data of all the expenses
	MonthlyBudget user;

	userAmount(user); //gets user's amount 
	compareAmount(user, data); //compares the expenses
							   //system("pause");
	return 0;
}

void userAmount(MonthlyBudget &user)//gets user's amount 
{

	//ask the user for the amount they spend on each expense
	cout << "Enter the amount spent on housing: ";
	cin >> user.housing;

	cout << "Enter the amount spent on utilities: ";
	cin >> user.utilities;

	cout << "Enter the amount spent on household expenses: ";
	cin >> user.household;

	cout << "Enter the amount spent on transportation: ";
	cin >> user.transportation;

	cout << "Enter the amount spent on food: ";
	cin >> user.food;

	cout << "Enter the amount spent on medical expenses: ";
	cin >> user.medical;

	cout << "Enter the amount spent on insurance: ";
	cin >> user.insurance;

	cout << "Enter the amount spent on entertainment: ";
	cin >> user.entertainment;

	cout << "Enter the amount spent on clothing: ";
	cin >> user.clothing;

	cout << "Enter the amount spent on miscellaneous expenses: ";
	cin >> user.miscellaneous;
	return;
}


void compareAmount(MonthlyBudget &user, MonthlyBudget &data)//compares the expenses
{

	cout << fixed << showpoint << setprecision(2);

	//displays they expense, how much it is, what the user spend and the difference
	cout << "\nCategory           Budgeted     Spent   Over(-)/Under";
	cout << "\n---------------------------------------------------------\n";

	cout << "Housing               " << data.housing << "    " << user.housing << "            " << data.housing - user.housing << endl;
	cout << "Utilities             " << data.utilities << "    " << user.utilities << "            " << data.utilities - user.utilities << endl;

	cout << "Household              " << data.household << "     " << user.household << "            " << data.household - user.household << endl;


	cout << "Transportation         " << data.transportation << "     " << user.transportation << "            " << data.transportation - user.transportation << endl;

	cout << "Food                  " << data.food << "    " << user.food << "            " << data.food - user.food << endl;


	cout << "Medical                " << data.medical << "     " << user.medical << "            " << data.medical - user.medical << endl;
	cout << "Insurance             " << data.insurance << "    " << user.insurance << "            " << data.insurance - user.insurance << endl;


	cout << "Entertainment         " << data.entertainment << "    " << data.entertainment << "            " << data.entertainment - data.entertainment << endl;

	cout << "Clothing               " << data.clothing << "     " << user.clothing << "            " << data.clothing - user.clothing << endl;

	cout << "Miscellanous           " << data.miscellaneous << "     " << user.miscellaneous << setw(16) << data.miscellaneous - user.miscellaneous << endl;


	float userTotal = user.housing + user.utilities + user.household + user.transportation + user.food + user.medical +
		user.insurance + user.entertainment + user.clothing + user.miscellaneous; //the total budget 

	float dataTotal = data.housing + data.utilities + data.household + data.transportation + data.food + data.medical +
		data.insurance + data.entertainment + data.clothing + data.miscellaneous; //the user's total budget

	float diff = dataTotal - userTotal; //gets the difference



	if (dataTotal < userTotal) //finds out if the user is over or under budge adnd by how much
	{
		cout << "For the month you are over budget by $" << diff << endl;
	}
	else
	{
		cout << "For the month you are under budget by $" << diff << endl;
	}

	system("pause");
	return;
}


void findLowest(const double rainfall[], const string months[], int SIZE)//finds the month with the lowest rainfall
{
	int min = 0;
	string lowestMonth;
	double lowest = rainfall[0];
	for (int i = 0; i < SIZE; i++)//goes through the years
	{
		if (rainfall[i] < lowest)//gets month with the lowest rainfall
		{
			min = i;
		}
	}
	lowestMonth = months[min];
	cout << "Least rainfall in: " << lowestMonth << endl; //outputs month with the lowest rainfall
	return;
}


void findHighest(const double rainfall[], const string months[], int SIZE)//finds the month with the highest rainfall
{
	int max = 0;
	string highestMonth;
	double highest = rainfall[0];
	for (int i = 0; i < SIZE; i++)//goes through the years
	{
		if (rainfall[i] > highest)//gets month with the highest rainfall
		{
			max = i;
		}
	}
	highestMonth = months[max];
	cout << "Most rainfall in: " << highestMonth << endl;//outputs month with the highest rainfall
	return;
}