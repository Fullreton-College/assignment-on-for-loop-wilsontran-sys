#include <iostream>
using namespace std;

int main() 
{
   // Constants
   const int INCREMENT = 5;

   // Variables
   int num1;
   int num2;
   
   // Input
   cout << "Enter the first integer: ";
   cin >> num1;

   cout << "Enter the second integer: ";
   cin >> num2;

   // Processing / output
   if(num1 > num2)
   {
      cout << "\nSecond integer can't be less than the first." << endl;
   }
   else
   {
      cout << endl;
      for(int i = num1; i <= num2; i += INCREMENT)
      {
         cout << i << " ";
      }
      cout << endl;
   }

   return 0;
}
