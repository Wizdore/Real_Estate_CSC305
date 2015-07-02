#include<iostream>
#include<vector>
#include<string>
#include "Adress.hpp"
#include "Date.hpp"
using namespace std;

class Person{
protected:
    string name;
    string type;
    Adress adress;
    string contactnumber;
    string email;
    Date dob;
    static int AvId;
public:

    string getName () return name;
    string getType () return type;
    Adress getAdress () return adress;
    string getContactnumber () return contactnumber;
    string getEmail () return email;
    Date getDate () return dob;

    int id;
    Person()
    {
        id = AvId;
        AvId++;
    }

    friend istream & operator >>(istream &, Person &);
    friend ostream & operator <<(ostream &, Person &);
};
istream & operator >>(istream & din, Person & P)
{
    cout<<"Enter Name:"; getline(din, P.name);
    cout<<"Enter your Address.....\n";din>>P.adress;
    cout<<"Enter your contact number:"; din>>P.contactnumber;
    cout<<"Enter your email:"; din>>P.email;
    cout<<"Enter the Birth day........\n"; din>>P.dob;
}
ostream & operator <<(ostream & dout, Person & P)
{
    dout<<"\nName:"<<P.name;
    dout<<"Address:\n"<<P.adress;
    dout<<"\nContact number:"<<P.contactnumber;
    dout<<"\nEmail:"<<P.email;
    dout<<"\nDate:"<<P.dob;
}

int Person::AvId = 0;
/**************************************************************/

class Customer: public Person{
protected:
    int mainrange;
    int maxrange;
    string cproptype;
    string word;
    string cpostottrice;
public:

    int getMainrange () return mainrange;
    int getMaxrange () return maxrange;
    string getCproptype () return cproptype;
    string getWord () return word;
    string getCpostottrice () return cpostottrice;

    friend istream &operator>>(istream &, Customer&);
    friend ostream &operator<<(ostream &, Customer&);
};
istream &operator>>(istream & din, Customer& C)
{
    din>>C;
    return din;
}
/****************************************************************/
class Employee: public Person{
protected:
    double salary;
    string designation;
public:
    double getSalary() return salary;
    string getDesignation() return designation;
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
    cout<<"Enter the Birth day..........\n"; din>>P.dob;
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


