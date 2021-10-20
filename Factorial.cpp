#include <iostream>

using namespace std;

   int isfactorial(int n){
   
    if( n ==1){
        return n;
        
    }else{
       
        return isfactorial(n-1)*n;
    }

   }


  int main()
{
    int n;
    cin >> n;
    cout << "Factorial of " << n << " is " << isfactorial(n)<< endl;

    return 0;
}

