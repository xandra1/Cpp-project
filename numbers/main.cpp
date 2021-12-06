#include <iostream>
#include <string>
#include <cmath>

using namespace std;

//this function executes decimal to binary operation
void binary()
{
    int binary[32];      // this array stores the remainders of the decimal number
    int i = 0;

   int decimal;         // users input is stored in this decimal variable

   cout << "You are about to convert from decimals to binary.\n\n";
   cout << "Please enter decimal number: ";
   cin >> decimal;
   cout << endl;

   // this loop repeates the process of storing the remainders in the array
   while ( decimal >= 1)
   {
       binary[i] = decimal % 2;
       decimal /= 2;
       i ++;
    }

   // the for loop prints the remainders from reverse
    {

   for (int j = i - 1; j >= 0; j--)
        cout << binary[j] ;

        cout << endl;
    }
}

//This function executes decimal to octal convertion
void octal()
{
    int decimal;           //variable holding user input

     int octal[30];         //Array storing octal digits
    int i = 0;

    cout << "You are about to convert from decimals to octal.\n\n";

    cout << "Please enter decimal number: ";
     cin >> decimal;
     cout << endl;

     while(decimal >= 1)       //This loop repeats the process of taking remainders
     {
         octal[i] = decimal % 8;
         decimal /= 8;

         i++;
     }
    {
     for(int j = i - 1; j >= 0; j--)    //This for loop reads stored values in the array in reverse

        cout << octal[j] ;
        cout << endl;
    }
}

int convertBinarytoOctal(long long binaryNumber)
{
    int octalNumber = 0, decimalNumber = 0, i = 0;

    while(binaryNumber != 0)
    {
        decimalNumber += (binaryNumber%10) * pow(2,i);
        ++i;
        binaryNumber/=10;
    }

    i = 1;

    while (decimalNumber != 0)
    {
        octalNumber += (decimalNumber % 8) * i;
        decimalNumber /= 8;
        i *= 10;
    }

    return octalNumber;
}

//This function executes decimal to hexadecimal convertion
void hexadecimal()
{
    int hexadecimal[25];
    int decimal;
    int i = 0;

    cout << "You are about to convert from decimals to hexadecimals.\n\n";
    cout << "Please enter decimal number: ";
    cin >> decimal;

    cout << endl;

    while(decimal > 0)
    {
        hexadecimal[i] = decimal % 16;
        decimal /= 16;

        i++;
    }

    {
        for(int j = i - 1; j >= 0; j--)

            if(hexadecimal[j] == 10)
        {
            cout << "A";
        }
        else if(hexadecimal[j] ==11)
        {
            cout << "B";
        }
        else if(hexadecimal[j] ==12)
        {
            cout << "C";
        }
        else if(hexadecimal[j] ==13)
        {
            cout << "D";
        }
        else if(hexadecimal[j] ==14)
        {
            cout << "E";
        }
        else if(hexadecimal[j] ==15)
        {
            cout << "F";
        }
        else
        {
                cout << hexadecimal[j];
        }

            cout << endl;
    }

}

void program()
{
    int response;

     cout << "To convert from decimals to binary enter '0'.\n";
     cout << "To convert from decimals to octal enter '1'.\n";
     cout << "To convert from decimals to hexadecimals enter '2'.\n\n";
     cout << "Enter response: ";
     cin >> response;
     cout << endl;

     if(response == 0)
     {
         binary();
     }
     else if(response == 1)
     {
         octal();
     }
     else if(response == 2)
     {
         hexadecimal();
     }
     else
     {
         cout << "Invalid response!! \n";
     }

}

int convertBinarytoOctal(long long);
int main()
{
    long long binaryNumber;

    cout << "Enter a binary number: ";
    cin >> binaryNumber;

    cout << binaryNumber << " in binary = " << convertBinarytoOctal(binaryNumber) << " in octal ";

    return 0;
}
