/*
Justin Seda
Design a class that has an array of floating-point numbers and demonstrate the class  in the program 
*/
#include <iostream>
#include <iomanip>

using namespace std;

class Array //array class
{
private: //private data members
	double *arr;
	int elem;
	int size;
	//float value;
public: //public data members
	Array(int num); //constructor 
	~Array(); //destructor
			  //mutator and accessor 
	void Store(int elem, double value);
	double Retrieve(int elem);
	double getHi();
	double getLow();
	double getAvg();
};

int main()
{
	int size = 5;
	Array element(size);
	cout << "Creating a Float Class Array Object with a size of 5.Using setI function with calls (0,1.4),(1,2.3),(2,3.13),(3,6.66),(4,7.711) to load array." << endl; //output
	cout << "Using getI with all legitmate index values to print array." << endl;

	element.Store(0, 1.4); //the numbers for the program
	element.Store(1, 2.3);
	element.Store(2, 3.13);
	element.Store(3, 6.66);
	element.Store(4, 7.711);

	for (int i = 0; i < size; i++)
	{
		cout << "The value of fArray1[" << i << "]= " << element.Retrieve(i) << endl; //displays the numbers 
	}

	cout << "Calling getHi returns highest value in array as: " << element.getHi() << endl;//gets highest value in array 
	cout << "Calling getLow returns lowest value in array as: " << element.getLow() << endl; //lowest value 
	cout << "Calling getAvg returns the average of the array as: " << element.getAvg() << endl; //finds the average of the array
	system("pause");
																								//system("pause");
	return 0;
}

//mutator and accessor function
Array::Array(int elem) //constructer
{
	arr = new double[elem];
}

Array::~Array()
{
	delete[]arr;
}

void Array::Store(int elem, double value) //desturctor
{
	arr[elem] = value;
}

double Array::Retrieve(int elem)
{
	return arr[elem];
}

double Array::getHi()
{
	double highest = arr[0];
	for (int i = 0; i < 5; i++)
	{
		if (arr[i] > highest)
		{
			highest = arr[i];
		}
	}
	return highest;
}

double Array::getLow()
{
	double lowest = arr[0];
	for (int i = 0; i < 5; i++)
	{
		if (arr[i] < lowest)
		{
			lowest = arr[i];
		}
	}
	return lowest;
}

double Array::getAvg()
{
	double sum = 0;
	double avg = 0;
	int i;
	for (i = 0; i < 5; i++)
	{
		sum += arr[i];
	}
	avg = sum / 5;
	return avg;
}