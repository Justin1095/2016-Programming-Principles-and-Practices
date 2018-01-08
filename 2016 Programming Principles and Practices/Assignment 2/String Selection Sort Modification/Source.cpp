// This program uses a selection sort to arrange an array of strings

//Justin Seda

#include<iostream>
#include<iomanip>
#include<string>
#include<fstream>
#include<cstdlib>
using namespace std;

// function prototypes

void selectionSortArray(string[], int);
void displayArray(string[], int);
void readName(string[], int);


int main()
{
	const int SIZE = 20;
	string values[SIZE];

	readName(values, SIZE);

	cout << "The values before the selection sort is performed are:" << endl;
	displayArray(values, SIZE);

	selectionSortArray(values, SIZE);
	cout << "\nThe values after the selection sort is performed are:" << endl;
	displayArray(values, SIZE);

	system("pause");
	return 0;
}

//****************************************************************
//				readName
//
//task: reads in the file
//
//******************************************************************

void readName(string array[], int elems)
{
	int num;
	ifstream inputFile;
	inputFile.open("names.txt");
	cout << "Enter number of names to read: ";
	cin >> num;
	if (!inputFile)
	{
		cout << "Error opening names" << endl;
		exit(0);
	}

	while (num < elems)
	{
		getline(inputFile, array[num]);
		num++;
	}



	inputFile.close();
}


//******************************************************************
//                      displayArray
//
// task: to print the array
//
//******************************************************************

void displayArray(string array[], int elems)    // function heading
{							   // Displays array
	for (int count = 0; count < elems; count++)
		cout << array[count] << "  ";
	cout << endl;
}

//******************************************************************
//                      selectionSortArray
//
// task: to sort values of an array in ascending order
//
//******************************************************************


void selectionSortArray(string array[], int elems)
{
	int seek;      //array position currently being put in order
	int minCount;  //location of smallest value found
	string minValue;  //holds the smallest value found

	for (seek = 0; seek < (elems - 1); seek++)  // outer loop performs the swap
												// and then increments seek
	{
		minCount = seek;
		minValue = array[seek];
		for (int index = seek + 1; index < elems; index++)
		{
			// inner loop searches through array     
			// starting at array[seek] searching
			// for the smallest value. When the 
			// value is found, the subscript is
			// stored in minCount. The value is    
			// stored in minValue.

			if (array[index] < minValue)
			{
				minValue = array[index];
				minCount = index;
			}
		}

		// the following two statements exchange the value of the
		// element currently needing the smallest value found in the 
		// pass(indicated by seek) with the smallest value found
		// (located in minValue)

		array[minCount] = array[seek];
		array[seek] = minValue;

	}
}