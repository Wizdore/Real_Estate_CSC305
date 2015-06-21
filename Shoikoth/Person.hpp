#include<iostream>
#include<vector>
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
}
class Customer: public Person{
protected:
    int mainrange;
    int maxrange;
    string cproptype;
    string word;
    string cpostottrice;
public:
}

class Employee: public Person{
protected:
    double salary;
    string designation;
public:
}

class Vendor: public Person{
protected:
    vector<property>toSell;
public:
}


