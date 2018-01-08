// Justin Seda
//Sept. 27, 2016
//This program gets the text file and displays the number of numbers, sum of numbers and the average of numbers from that text file.
#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

int main()
{
	ifstream inputFile; //Name of the file
	int num;//number
	int count = 0;
	float sum = 0;
	float avg = 0;//average

	inputFile.open("Random.txt"); //calls the file

	while (inputFile >> num)//goes through all the numbers in the file
	{
		count++;//counts how many numbers are in the file
		sum += num;//gets the sum of all the numbers
	}
	avg = sum / count;//finds the average of the numbers

	cout << "Number of numbers: ";//displays the number of numbers
	cout << count << endl;

	cout << "Sum of the numbers: ";//displays the sum of numbers
	cout << sum << endl;

	cout << "Average of the numbers: ";//displays the average of the numbers
	cout << avg << endl;

	inputFile.close();//closes the file
	system("pause");
	return 0;

}