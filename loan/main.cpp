#include <iostream>
#include <cmath>

using namespace std;

int main;
{
    int input;
    int payment1;
    int payment2;
    int payment3;
    int remainder;
    int output;

    cout << "Enter amount of loan: ";
    cin >> input;

    //monthly payment schedule//

    //payment for the first month//
    payment1 = input * 0.1;
    remainder= input - payment1;

    //payment for the second month//
    payment2= remainder * 0.1;
    remainder= remainder - payment2;
    //payment for the third month//
    payment3= remainder * 0.1;
    remainder= remainder - payment3;

    output = remainder;
    cout << output;

    return 0;
}
