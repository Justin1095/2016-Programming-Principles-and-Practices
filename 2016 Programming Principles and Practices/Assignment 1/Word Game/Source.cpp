//Justin Seda
//Sept. 27, 2016
//Word Game
//This program ask the user for their name, name of city, their age, name of college, profession, type of animal and pet's name. Once it gets all of the inputs, it creates a story
// with all of the information
#include<iostream>
#include<string>
using namespace std;


int main()
{
	string name;//user's name
	string city;//name of city
	string age;//their age
	string college;//name of college
	string job;//their profession
	string pet;//type of animal
	string petName;//pet's name

	cout << "Enter name: ";//prompts user for name;
	getline(cin, name);//gets name

	cout << "Enter city: ";//prompts user for their city's name
	getline(cin, city);//gets city's name

	cout << "Enter age: ";//prompts user for age
	getline(cin, age);//gets age

	cout << "Enter college: ";//prompts user for college
	getline(cin, college);//gets college

	cout << "Enter profession: ";//prompts user for profession
	getline(cin, job);//gets profession

	cout << "Enter animal: ";//prompts user for animal
	getline(cin, pet);//gets animal

	cout << "Enter pet name: ";//prompts user for pet's name
	getline(cin, petName);//gets pet's name
	cout << "" << endl;

	cout << "There once was a person named " << name << " who lived in " << city << "." << endl;
	cout << "At the age of " << age << ", " << name << " went to college at " << college << "." << endl;
	cout << name << " graduated and went to work as a " << job << ". " << endl;
	cout << "Then, " << name << " adopted a(n) " << pet << " named " << petName << "." << endl;
	cout << "They both lived happily ever after!" << endl;//Gets all of the inputs and creates a story to output
	cout << "" << endl;
	system("pause");
	return 0;
}
