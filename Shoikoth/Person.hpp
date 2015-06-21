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
class Person: public Customer{
protected:
    int mainrange;
    int maxrange;
    string cproptype;
    string word;
    string cpostottrice;
public:
}

class Person: public Employee{
protected:
    double salary;
    string designation;
public:
}

class Person: public Vendor{
protected:
    vector<property>toSell;
public:
}


