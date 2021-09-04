#include <iostream>
using namespace std;


int main() {
  
  int amountToChange;
  int numFives;
  int numOnes;
    
      cout << "Enter amount to be changed: "; 
      cin >> amountToChange;
      numFives = amountToChange / 5;

      int amountLeft = amountToChange % 5;
      numOnes = amountLeft / 1;

      // The  maximum number of five dollar bills, followed by one dollar bills to be received.
      cout << "Number of five dollars: " << numFives << endl;
      cout << "Number of one dollar: " << numOnes << endl;


   
    return 0;
}
