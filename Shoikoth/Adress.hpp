#include<iostream>
using namespace std;

class Adress{
protected:
    string city;
    string country;
    int zip;
    string steetinfo;
public:
}
class HouseAdress: public Adress
{
protected:
    string houseNo;
    string sector;
public:
}
class FlatAdress: public Adress{
protected:
    int floorNo;
    string FlatNo;
public:
}
