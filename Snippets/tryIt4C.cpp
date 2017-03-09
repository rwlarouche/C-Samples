// Lab 4 tryIt4C -- Write data to a file
// You can use a different file name. Then run the
// program to see if you can get a new file that stores all the data with right format.
#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>

using namespace std;

int main(){
	
	string name,		// student's name
		   id;			// student's id
	float score;
	
	ofstream dataOut;
	dataOut.open("students.txt");   // You have to open the file first
	dataOut << left << setw(10) << "name" << setw(15) << "id" << setw(3) << "score" << endl;
	name = "John";
	id = "h70241456";
	score = 93.5;
	dataOut << left << setw(10) << name << setw(15) << id << setw(3) << score << endl;
	
	name = "Dan";
	id = "h702423789";
	score = 90;
	dataOut << left << setw(10) << name << setw(15) << id << setw(3) << score << endl;

	name = "Ryan";
	id = "h702849369";
	score = 90;
	dataOut << left << setw(10) << name << setw(15) << id << setw(3) << score << endl;
	
	dataOut.close();  // Always remember to close the file at the end
	
	return 0;
}