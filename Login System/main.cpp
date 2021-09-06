#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    string path = "PATH-TO-STORE-TO";
   string firstname;
   string lastname;
   string username;
   string password;
   string gender;
   string email;
   string birthDate;
   int age;
   string nationality;


   cout << "Enter first name: ";
   cin >> firstname;
   cout << "Enter last name: ";
   cin >> lastname;
   cout << "Enter username: ";
   cin >> username;
   cout << "Enter  password: ";
   cin >> password;
   cout << "Gender: ";
   cin >> gender;
   cout << "Enter email: ";
   cin >> email;
   cout << "Enter date of birth: ";
   cin >> birthDate;
   cout << "Enter your age: ";
   cin >> age;
   cout << "Enter your nationality: ";
   cin >> nationality;




    //if user age is below 18
    if ( age < 18 ){
        cout << "Sorry your age does not qualified to register."<< endl;
    }else if(nationality != "America"){
        cout << "Sorry your nationality does not qualified to register."<< endl;
    }else{
    //creating file to store USER data
       ofstream MyFile(path+username+".txt");
       //writing user data to username.txt
        MyFile << username << endl;
        MyFile << password << endl;
        MyFile << firstname << endl;
        MyFile << lastname << endl;
        MyFile << email << endl;
        MyFile << gender << endl;
        MyFile << birthDate << endl;
        MyFile << age << endl;
        MyFile << nationality << endl;
     
        // this appears if the user qualifies to be registered
        cout << "Account created successsfully" <<endl;
        MyFile.close();
    }


    return 0;
}
