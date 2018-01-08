//Program Assignment 1
//Justin Seda
//Sept. 27, 2016
//This program asks for the square feet and then calculates the number of acres in the tract of land with the the input square feet.
#include<iostream>
using namespace std;

const float ACRE = 43560; // 1 acre equals 43560 square feet

int main()
{
	float feet = 389767; //square feet

	float totalAcres = feet / ACRE; //finds the total amount of acres for the giving square feet by dividing square feet by 1 acre

	cout << "389,767 square feet equals " << totalAcres << " acres. " << endl; //outputs the results
	system("pause");
	return 0;

}