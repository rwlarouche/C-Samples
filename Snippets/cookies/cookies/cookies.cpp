// Lab 4 - cookies.cpp  
// This program finds the average number of boxes of cookies 
// sold by the children in a particular scout troop. 
// It illustrates the use of a counter, an accumulator, 
// and an end sentinel.
// Ryan LaRouche                       
#include <iostream>
using namespace std;

int main()
{
	int numBoxes,			// Number of boxes of cookies sold by one child
		totalBoxes = 0,      // Accumulates total boxes sold by the entire troop (totalBoxes sold starts at 0)
		numSeller = 1;       // Counts the number of children selling cookies (number of children sellings starts at 1)

	double averageBoxes;		// Average number of boxes sold per child

	cout << "             **** Cookie Sales Information **** \n\n";

	// Gets the first input
	cout << "Enter number of boxes of cookies sold by seller " << numSeller
		<< " (or -1 to quit): ";
	cin >> numBoxes;

	// Loops while numBoxes does not equal -1
	while (numBoxes != -1)
	{
		totalBoxes += numBoxes;		// Adds numBoxes to the totalBoxes accumulator
		numSeller++;					// Adds 1 to the numSeller counter

										// Prompts user to input the number of boxes sold by the next seller (or -1 to exit the loop)
		cout << "Enter number of boxes of cookies sold by seller " << numSeller
			<< "(or -1 to quit): ";
		cin >> numBoxes;
	}

	numSeller--; // When the loop is exited, the value stored in the numSeller counter is 1 more than the actual number of sellers
				 // due to 'numSeller++' in the loop. 
				 // Adjusts counter to the actual number of sellers.

	if (numSeller == 0)
		cout << "\nNo boxes were sold.\n";
	else
	{
		averageBoxes = (static_cast<double>(totalBoxes) / numSeller);	// Assigns averageBoxes the computer average number of boxes sold per seller

																		// Prints the number of sellers and the average number of boxes sold per seller.
		cout << "The average number of boxes sold by the " << numSeller << " was " << averageBoxes << "." << endl;
	}

	return 0;
}
