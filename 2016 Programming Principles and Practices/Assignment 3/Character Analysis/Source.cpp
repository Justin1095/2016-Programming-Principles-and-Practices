/*
Justin Seda
This program counts the number of uppercases, lowercases and digits in a text file.
*/
#include<fstream>
#include<iostream>
using namespace std;

int main()
{
	char c; //characters
	int upper = 0; //uppercase 
	int lower = 0; //lowercase
	int digits = 0;

	ifstream inputFile;
	inputFile.open("text.txt"); //calls and opens the file

	while (inputFile >> c) //gets the characters from the file
	{
		if (isupper(c)) //finds uppercase letters
		{
			upper++;
		}
		if (islower(c)) //finds lowercase letters
		{
			lower++;
		}
		if (isdigit(c)) //finds the digits
		{
			digits++;
		}
	}
	inputFile.close(); // close the file

	cout << "Uppercase characters: " << upper << endl;
	cout << "Lowercase characters: " << lower << endl;
	cout << "Digits: " << digits << endl;
	//displays uppercase letters, lowercase letters and digits

	system("pause");
	return 0;
}