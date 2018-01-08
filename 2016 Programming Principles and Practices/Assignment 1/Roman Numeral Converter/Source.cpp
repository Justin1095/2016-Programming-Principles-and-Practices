//Program Assignment 1
//Justin Seda
//Sept. 27, 2016
//This program ask the user to input a number from 1 to 10, and the program will convert it to a Roman Numeral
#include<iostream>
using namespace std;

int num; //number

int main()
{

	cout << "Enter a number (1 - 10): ";//prompts user to input a number from 1 to 10
	cin >> num;

	if (num >= 1 && num <= 10)//checks if the number is actually from 1 to 10
	{
		switch (num)//uses a switch statement to convert the numbers to Roman Numeral
		{
		case 1:  cout << "The Roman numeral version of 1 is I." << endl;
			break;
		case 2:  cout << "The Roman numeral version of 2 is II." << endl;
			break;
		case 3:  cout << "The Roman numeral version of 3 is III." << endl;
			break;
		case 4:  cout << "The Roman numeral version of 4 is IV." << endl;
			break;
		case 5:  cout << "The Roman numeral version of 5 is V." << endl;
			break;
		case 6:  cout << "The Roman numeral version of 6 is VI." << endl;
			break;
		case 7:  cout << "The Roman numeral version of 7 is VII." << endl;
			break;
		case 8:  cout << "The Roman numeral version of 8 is VIII." << endl;
			break;
		case 9:  cout << "The Roman numeral version of 9 is IX." << endl;
			break;
		case 10:  cout << "The Roman numeral version of 10 is X." << endl;
			break;
		}
	}
	else//if it's not from 1 to 10, it will prompt the user with an error message
	{
		cout << "Invalid input, please input a number from 1 t0 10." << endl;
	}

	
	system("pause");
	return 0;
}