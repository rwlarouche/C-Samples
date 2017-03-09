// Lab 2 icecream.cpp
/* Prompts the user to enter the number of each cone type (3 types) sold
each day, and then computes and displays a daily sales report with the following:
	- Number of cones sold of each type
	- Total sales $ of each type
	- Total number of cones sold
	- Total sales $ of all cones sold */
// Ryan LaRouche

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() 
{
	long double oneSold, doubleSold, tripleSold, totalSold;			// Number sold of each type of cone
	double oneCost = 1.49,
		   doubleCost = 2.49, tripleCost = 3.49;					// Cost of each type of cone
	long double oneSales, doubleSales, tripleSales, totalSales;		// Sales $ of each type of cone
	
	// Prompt the user for the number of cones sold for each type
	cout << "Number of single scoop cones sold: ";
	cin >> oneSold;
	cout << "Number of triple scoop cones sold: ";
	cin >> doubleSold;
	cout << "Number of triple scoop cones sold: ";
	cin >> tripleSold;

	// Calculate the sales $ of each type of cone
	oneSales = (oneSold * oneCost);
	cout << oneSales << endl;
	doubleSales = (doubleSold * doubleCost);
	tripleSales = (tripleSold * tripleCost);

	// Calculate total number of cones sold and total sales $
	totalSold = (oneSold + doubleSold + tripleSold);
	totalSales = (oneSales + doubleSales + tripleSales);

	// Display the daily sales report (includes the info stated in program description)
	cout << left << setw(22) << "\nCone Type" << setw(10) << "# Sold" << setw(11) << "Sales $" << endl;
	cout << "===================================================\n\n";
	cout << left << setw(20) << "DeLIGHTful cones" << right << setw(7) << setprecision(0) << fixed << oneSold << setw(4) << "$" << setw(7) << setprecision(2) << fixed << oneSales << endl;
	cout << left << setw(15) << "Double DeLIGHT cones" << right << setw(7) << setprecision(0) << fixed << doubleSold << setw(4) << "$" << setw(7) << setprecision(2) << fixed << doubleSales << endl;
	cout << left << setw(15) << "Triple DeLIGHT cones" << right << setw(7) << setprecision(0) << fixed << tripleSold << setw(4) << "$" << setw(7) << setprecision(2) << fixed << tripleSales << endl;
	cout << left << setw(20) << "Total" << right << setw(7) << setprecision(0) << fixed << totalSold << setw(4) << "$" << setw(7) << setprecision(2) << fixed << totalSales << endl;

	return 0;
}