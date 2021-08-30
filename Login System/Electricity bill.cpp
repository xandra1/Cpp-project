#include <iostream>
#include <string>
using namespace std;

int main()
{

    string customerName;

    float  quantityOfElectricity;

    string category;

    double monthlyBill;



    cout << "Customer's Name: ";

    getline(cin, customerName);

    cout << "Quantity of electricity consumed:  ";

    cin >> quantityOfElectricity;

    if (quantityOfElectricity <= 150){

        category = "Domestic";
        monthlyBill = quantityOfElectricity * 1.2;

    }else if (quantityOfElectricity > 350){

        category = "Commercial";
        monthlyBill = quantityOfElectricity * 3.5;
    }else{
        category = "Industrial";
        monthlyBill = quantityOfElectricity * 2.3;
    }




   double ruralElectrification = monthlyBill * 0.01;

     monthlyBill = monthlyBill + ruralElectrification;

   double government_subsidy = 0.5 * monthlyBill;

     double payable_amount = monthlyBill - government_subsidy;




        cout << "Name: " << customerName << endl;

        cout << "Quantity of Electricity Consumed: " << quantityOfElectricity << " KW" << endl;

        cout << "Category: " << category << endl;

        cout << "1% Rural Electrification charge: " << "Ghc " << ruralElectrification << endl;

        cout << "50% Government subsidy: " << "Ghc " << government_subsidy << endl;

       cout << "Total amount for the month: " << "Ghc " << payable_amount << endl;








        return 0;
}
