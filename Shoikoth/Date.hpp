#include<iostream>
using namespace std;

class Date{
protected:
    int day;
    int month;
    int year;
public:
    int getDay() {return day;}
    int getMonth() {return month;}
    int getYear() {return year;}
    friend istream& operator >>(istream &, Date &);
    friend ostream& operator <<(ostream &, Date &);
};
istream &operator >>(istream &input, Date &d)
{
cout<<"Enter day:";input>>d.day;
cout<<"Enter month:";input>>d.month;
cout<<"Enter year:";input>>d.year;
return input;
}
ostream& operator <<(ostream &dout, Date &d)
{
dout<<"\nEnter day:"<<d.day;
dout<<"\nEnter month:"<<d.month;
dout<<"\nEnter year:"<<d.year;
return dout;
}
