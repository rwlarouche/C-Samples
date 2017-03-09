// This program computes average scores for 3 games of bowling
// for each of 4 students. It displays this information in a file
// along with each student's name and previous average.
// Ryan LaRouche

#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
using namespace std;

int main()
{
	int NUM_STUDENTS = 4,	// The number of students in a group
		NUM_GAMES = 3,		// The number of games played in a week
		MAX_SCORE = 300;	// The maximum possible score for 1 game
	
	int total,				// A student's total score for today's games
		score;				// A student's score for 1 game
	string teamName,		// The team name
		name;				// A student's name
	double oldAvg,			// A student's previous week's average
		newAvg;				// A student's average for this week

	ofstream report;		// File for saving students' report

	// Open file
	report.open("bowling.txt");

	// Get and print headings
	cout << "Enter the team name: ";
	getline(cin, teamName);
	report << "\n   Weekly Bowling Report for " << teamName << "\n\n";
	report << "Name          Last week's avg    Today's avg\n\n";
	report << fixed << showpoint << setprecision(1);

	// Get and process information for each student
	for (int student = 1; student <= NUM_STUDENTS; student++)
	{
		total = 0; // Reset the accumulator to 0 for each student
		cout << "\nEnter your name: ";
		getline(cin, name);
		cout << "Enter your last week's average game score ";
		cin >> oldAvg;
		while ((oldAvg < 0) || (oldAvg > MAX_SCORE))
		{
			cout << "Average must be between 0 and " << MAX_SCORE << ".\n"
				<< "Please reenter your last week's average: ";
			cin >> oldAvg;
		}
		for (int game = 1; game <= NUM_GAMES; game++)
		{
			cout << "Enter today's score for game " << game << ": ";
			cin >> score;
			while ((score < 0) || (score > MAX_SCORE))
			{
				cout << "Average must be between 0 and " << MAX_SCORE << ".\n"
					<< "Please reenter score for game " << game << ": ";
				cin >> score;
			}
			total += score;
		}
		newAvg = (static_cast<double>(total) / NUM_GAMES);
		report << left << setw(12) << name << right
			<< setw(10) << oldAvg << setw(18) << newAvg << endl;

		cin.ignore();		// Clear \n from input buffer
	}
	report.close();
	return 0;
}