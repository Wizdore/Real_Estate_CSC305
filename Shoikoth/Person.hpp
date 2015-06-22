#include<iostream>
#include<vector>
#include<string>
#include "Adress.hpp"
#include "Date.hpp"
using namespace std;

class Person{
protected:
    string name;
    Adress adress;
    string contactnumber;
    string email;
    Date dob;
public:
    friend istream & operator >>(istream &, Person &);
    friend ostream & operator <<(ostream &, Person &);
};
istream & operator >>(istream & din, Person & P)
{
    cout<<"Enter Name:"; getline(din, P.name);
    cout<<"Enter your Address:\n";din>>P.adress;
    cout<<"Enter your contact number:"; din>>P.contactnumber;
    cout<<"Enter your email:"; din>>P.email;
    cout<<"Enter the date"; din>>P.dob;
}
ostream & operator <<(ostream & dout, Person & P)
{
    dout<<"\nName:"<<P.name;
    dout<<"Address:\n"<<P.adress;
    dout<<"\nContact number:"<<P.contactnumber;
    dout<<"\nEmail:"<<P.email;
    dout<<"\nDate:"<<P.dob;
}

/**************************************************************/

class Customer: public Person{
protected:
    int mainrange;
    int maxrange;
    string cproptype;
    string word;
    string cpostottrice;
public:
    friend istream &operator>>(istream &, Customer&);
    friend ostream &operator<<(ostream &, Customer&);
};
istream &operator>>(istream & din, Customer& C)
{
    din>>C;
}
/****************************************************************/
class Employee: public Person{
protected:
    double salary;
    string designation;
public:
    friend istream & operator >>(istream &, Employee &);
    friend ostream & operator <<(ostream &, Employee &);
};
istream& operator >>(istream & din, Employee&P)
{
    cin.get();
    cout<<"Enter Name:"; getline(din, P.name);
    cout<<"Enter your Address:\n";din>>P.adress;
    cout<<"Enter your contact number:"; din>>P.contactnumber;
    cout<<"Enter your email:"; din>>P.email;
    cout<<"Enter the date"; din>>P.dob;
    cout<<"Enter salary:";cin>>P.salary;
    cout<<"Enter designation:"; getline(cin,P.designation);
    return din;
}
ostream& operator <<(ostream & dout, Employee & P)
{
    dout<<"\nName:"<<P.name;
    dout<<"Address:\n"<<P.adress;
    dout<<"\nContact number:"<<P.contactnumber;
    dout<<"\nEmail:"<<P.email;
    dout<<"\nDate:"<<P.dob;
    cout<<"Salary:"<<P.salary;
    cout<<"Designation:"<<P.designation;
    return dout;
}
class Vendor: public Person{
protected:
   // vector<property>toSell;
public:
};


