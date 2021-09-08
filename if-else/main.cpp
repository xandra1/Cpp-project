#include <iostream>
using namespace std;

int main() {
   int number;
   

 //Receives number to be tested
   cout << "Enter the number ";
   cin >> number;

   if (number % 2 == 0) {
       cout << "Even";
   }
   else  {
       cout << "Odd";
   }

   return 0;
}


