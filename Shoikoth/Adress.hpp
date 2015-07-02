#include<iostream>
#include<string>
using namespace std;

class Adress{
protected:
    string city;
    string country;
    int zip;
    string steetinfo;
public:

    string getCity(){return city;}
    string getCountry(){return country;}
    int getzip(){return zip;}
    string getSteetinfo(){return steetinfo;}

    friend istream& operator >>(istream &, Adress &);
    friend ostream& operator <<(ostream &, Adress &);
};
istream& operator >>(istream &input, Adress &A)
{
    cout<<"Enter city:";getline(input, A.city);
    cout<<"Enter country:"; getline(input, A.country);
    cout<<"Enter Zip:"; input>>A.zip;
    cout<<"Enter State Info:"; cin.ignore(); getline(input, A.steetinfo);
    return input;
}
ostream& operator <<(ostream &dout, Adress &A)
{
    dout<<"\nCity:"<<A.city;
    dout<<"\nCountry:"<<A.country;
    dout<<"\nZip:"<<A.zip;
    dout<<"\nState Info:"<<A.steetinfo;
    return dout;
}
class HouseAdress: public Adress
{
protected:
    int houseNo;
    int sector;
public:
    int getHouseNo() {return houseNo;}
    int getSector() {return sector;}
    friend istream& operator >>(istream &, HouseAdress &);
    friend ostream& operator <<(ostream &, HouseAdress &);
};

istream& operator >>(istream &input, HouseAdress &A)
{
    cout<<"Enter city:";getline(input, A.city);
    cout<<"Enter country:"; getline(input, A.country);
    cout<<"Enter Zip:"; input>>A.zip;
    cout<<"Enter State Info:"; cin.ignore(); getline(input, A.steetinfo);
    cout<<"Enter House NO:"; input>>A.houseNo;
    cout<<"Enter Sector:"; input>>A.sector;
    return input;
}
ostream& operator <<(ostream &dout, HouseAdress &A)
{
    dout<<"\nCity:"<<A.city;
    dout<<"\nCountry:"<<A.country;
    dout<<"\nZip:"<<A.zip;
    dout<<"\nState Info:"<<A.steetinfo;
    dout<<"Enter House NO:"<<A.houseNo;
    dout<<"Enter Sector:"<<A.sector;
    return dout;
}


class FlatAdress: public Adress
{
protected:
    int floorNo;
    int FlatNo;
public:
    int getFloorNo(){return floorNo;}
    int getFlatNo(){return FlatNo;}

    friend istream& operator >>(istream &, FlatAdress &);
    friend ostream& operator <<(ostream &, FlatAdress &);
};

istream& operator >>(istream &input, FlatAdress &A)
{
    cout<<"Enter city:";getline(input, A.city);
    cout<<"Enter country:"; getline(input, A.country);
    cout<<"Enter Zip:"; input>>A.zip;
    cout<<"Enter State Info:"; cin.ignore();  getline(input, A.steetinfo);
    cout<<"Enter Floor No"; input>>A.floorNo;
    cout<<"Enter Flat No"; input>>A.FlatNo;
    return input;
}
ostream& operator <<(ostream &dout, FlatAdress &A)
{
    dout<<"\nCity:"<<A.city;
    dout<<"\nCountry:"<<A.country;
    dout<<"\nZip:"<<A.zip;
    dout<<"\nState Info:"<<A.steetinfo;
    dout<<"Enter Floor No"<<A.floorNo;
    dout<<"Enter Flat No"<<A.FlatNo;
    return dout;
}
