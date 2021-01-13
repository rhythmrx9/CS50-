#include <iostream>
#include <cmath>

using namespace std;

//program to check Armstrong number of n
//Armstrong number (of order n) is abc... = a^n + b^n + c^n + ...


int main() 
{
   int num, originalnum, remainder, n = 0, result = 0, power;
   cout << "Enter an integer: ";
   cin >> num;

   originalnum = num;

   while (originalnum != 0) {
      originalnum /= 10;
      ++n;
   }
   originalnum = num;

   while (originalnum != 0) {
      remainder = originalnum % 10;

      // pow() returns the value of x to the power of y 
      // round() function in C++ returns the nearest int
      power = round(pow(remainder, n));
      result += power;
      originalnum /= 10;
   }

   if (result == num)
      cout << num << " is an Armstrong number.";
   else
      cout << num << " is not an Armstrong number.";

cout << endl;

return 0;
}