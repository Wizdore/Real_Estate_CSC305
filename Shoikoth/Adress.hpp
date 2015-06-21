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
class Adress: public HouseAdress
{
protected:
    string houseNo;
    string sector;
public:
}
class Adress: public FlatAdress{
protected:
    int floorNo;
    string FlatNo;
public:
}
