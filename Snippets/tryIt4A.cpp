// Lab 4 tryIt4A -- Using the increment and decrement operators
// Determine what each output statement will print. Then run the
// program to see if you are correct. If any of your answers are
// wrong, figure out why the program produced the output it did.
#include <iostream>
using namespace std;

int main()
{
   int a = 5,
        b = 3, c = 7; 
   
   cout << a-- << ' ';
   cout << a   << ' ';
   cout << a-- << ' ' << a-- << ' ';
   cout << a-- << ' ' << a << endl;
   
   a = b++ * c--;
   cout << a << "  " << b << ' ' << c << endl; 
           
   return 0;
}
