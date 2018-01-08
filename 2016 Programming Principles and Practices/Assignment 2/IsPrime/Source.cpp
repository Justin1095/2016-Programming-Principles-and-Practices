/* 
This program ask the user to input a number and finds all the prime numbers starting from 1 to the 
user's input number then outputs it in a text file called PrimeList.txt
Justin Seda
*/
#include<fstream>
#include<iostream>
using namespace std;

//Function prototype
bool FindPrimeNum(int); //function that finds the prime numbers

int main()
{
	ofstream outputFile;
	int number = 0;

	outputFile.open("PrimeList.txt"); //calls and opens the PrimeList.txt file
	cout << "This program will get a specific number and find all the prime numbers from 0 to that specific number and print it into a text file." << endl << "Please input a specific number:"; 

	while (number == 0) //gets the numbers
	{
		cin >> number;
	}

	for (int i = 2; i <= number; i++) //goes through all the numbers
	{
		if (FindPrimeNum(i))// calls the findPrime function
		{
			outputFile << i << endl; //outputs the prime numbers
		}
	}

	cout << "Prime numbers written to PrimeList.txt." << endl; //outputs "Prime numbers written to PrimeList.txt." on to the file
	system("pause");
	outputFile.close(); //closes the PrimeList.txt file
	return 0;
}

bool FindPrimeNum(int i)//function that finds the prime numbers
{
	for (int j = 2; j < i; j++)//This for loop will look at i, put it into the if statement, if the i cannot go into the if statement then 1 will be add to j. 
	{						 // It will keep doing this process until the remainder of i and j is equal to 0, or until the loop is false.
							 //If the loop is false then i is a prime number.
		if (i % j == 0) //if the remainder of i and j is equal to 0, then it is not a prime number
		{
			return false; //it will return false
		}

	}
	return true;
}