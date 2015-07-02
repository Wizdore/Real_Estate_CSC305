#include<iostream>
#include<string>
#include<fstream>
#include"Shoikoth/Person.hpp"
using namespace std;
void login()
{
    int ch;
    cout<<"Please Enter 1 for login, 2 for create new account:";
    ofstream create;
    create.open("login_details/logindetails.txt");
    string p;
    cin>>p;
    create<<p;
}
int main()
{
    login();
}
