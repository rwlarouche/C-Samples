// Lab 4 students.cpp
// This program usea a do-while loop to ask the user types data records
// Save each data record to the file, and ask if the user wants to type more
// Ryan LaRouche

#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
using namespace std;


int main()
{
	string name,						// student’s name
		   id;							// student’s id
	float score;						// student’s score
	ofstream dataOut;					// Define an input file stream object 
	dataOut.open("students.txt");		//Open the file
	dataOut << left << setw(10) << "name" << setw(15) << "id" << setw(4) << "score" << endl;

	string doAgain;
	do
	{
		cout << "Please enter the student's name: " << endl;	// Asks the user to type student's name and save it to a variable
		cin >> name;

		cout << "Please enter the student's id: " << endl;		// Ask the user to type the student's id and save it to a variable
		cin >> id;

		cout << "Please enter the student's score: " << endl;	// Ask the user to type the student's score and save it as a variable.
		cin >> score;

		// Write name, id, and score to the file with format
		dataOut << left << setw(10) << name << setw(15) << id << setw(4) << score << endl;

		// Ask if the user wants to type in another data record
		cout << "Do you want to type in another data record? (y/n) " << endl;
		cin >> doAgain;

	} while (doAgain != "n" && doAgain != "N" && doAgain != "no" && doAgain != "No" && doAgain != "NO" && doAgain != "nO"); // Exit loop (program) if user enters 'N' or 'n'

	dataOut.close(); // Close the file
	return 0;
}
