// Lab 4 - loops.cpp  Working with looping structures
// Ryan LaRouche                        
#include <iostream>
using namespace std;

int main()
{   
   cout << "Ryan LaRouche. \n";
   cout << "\nActivity 1 \n==========\n";
   // Change the following do-while loop to a while loop. 
   int inputNum = 1;
   while (inputNum != 0)
   {  cout << "Enter a number (or 0 to quit): ";
      cin  >> inputNum;
   }

   cout << "\nActivity 2 \n==========\n";
   // Change the following while loop to a do-while loop. 
   char doAgain = 'y';
   do
   {  cout << "Do you want to loop again? (y/n) ";
      cin  >> doAgain;
   } while (doAgain == 'Y' || doAgain == 'y');
 
   cout << "\nActivity 3 \n==========\n";
   // Change the following while loop to a for loop. 
   int count = 1;
   for (count; count <= 5; count++)
   {
	   cout << "Count is " << count << endl;
   }

   cout << "\nActivity 4 \n==========\n";
   // Change the following for loop to a while loop. 
   int x = 5;
   while (x > 0)
   {
	   cout << x << " seconds to go. \n";
	   x--;
   }
 
   return 0;
}
