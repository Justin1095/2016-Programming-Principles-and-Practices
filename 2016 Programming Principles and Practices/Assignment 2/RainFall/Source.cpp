//This program lets the user enter the total rainfall for each of 12 months and finds the total rainfall for the year,average monthly rainfall and the months with the highest and lowest amounts.
//Justin Seda
#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

void findHighest(const double[], const string[], int);//finds the month with the highest rainfall
void findLowest(const double[], const string[], int);//finds the month with the lowest rainfall
void findAvg(const double[], const string[], int);//finds the average monthly rainfall and total rainfall

const int SIZE = 12;//an array that contains 12 items, for 12 months

int main()
{
	string months[SIZE] = { "January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December" }; //array with all the months
	double rainfall[SIZE];

	for (int i = 0; i < SIZE; i++) //goes through all the months
	{
		cout << "Enter rainfall for " << months[i] << ": ";//ask user for the rainfall
		cin >> rainfall[i];
		while (rainfall[i] < 0)
		{
			cout << "invalid data(negative rainfall) --retry" << endl;//if negative then sents error message
			cin >> rainfall[i];
		}
	}
	findAvg(rainfall, months, SIZE);//finds the average monthly rainfall and total rainfall
	findLowest(rainfall, months, SIZE);//finds the month with the lowest rainfall
	findHighest(rainfall, months, SIZE);//finds the month with the highest rainfall
	system("pause");
	return 0;
}

void findAvg(const double rainfall[], const string months[], int SIZE)//finds the average monthly rainfall and total rainfall
{


	double year = 0;
	for (int i = 0; i < SIZE; i++)//goes through the years
	{
		year = year + rainfall[i];
	}
	double avg = year / SIZE;//the average
	cout << "Total rainfall: " << year << endl;//outputs total rainfall
	cout << "Average rainfall: " << avg << endl;//outputs average rainfall
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