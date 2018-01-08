// This program ask the user for a 5 digit ticket number and finds out if it is a winning ticket or not.

//Justin Seda

#include<iostream>
using namespace std;

//Function prototype
int searchList(const int[], int, int); //function that performs a linear search
const int SIZE = 10; //an array that can contain 10 items

int main()
{
	int tickets[SIZE] = { 13579, 26791, 26792, 33445, 55555, 62483, 77777, 79422, 85647, 93121 }; //the numbers within the array, also the winning tickets
	int input; //the user's input ticket
	int results;

	cout << "Enter this week's 5-digit winning lottery number:"; //prompts the user to input a ticket number
	cin >> input;//gets user's input

	results = searchList(tickets, SIZE, input);//puts the function call into results, goes to the function

	if (results == -1) //if results equals -1
	{
		cout << "You did not win this week." << endl;//outputs that the ticket is not a winner
	}
	else
	{
		cout << "This is a winning ticket" << endl; //outputs that the ticket is a winner
	}
	system("pause");
	return 0;

}

int searchList(const int tickets[], int SIZE, int input)//function that performs a linear search
{
	int index = 0;//Used to subscript to the search array
	int pos = -1; //the position 
	bool found = false;//indicates if input is found

	while (index < SIZE && !found)
	{
		if (tickets[index] == input)//if input is found
		{
			found = true;
			pos = index; //record the input's subscript
		}
		index++; //gots to the next element in the array
	}
	return pos; //returns position or -1
}

