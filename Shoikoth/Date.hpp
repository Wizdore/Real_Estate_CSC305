#include<iostream>
using namespace std;

class Date{
protected:
    int day;
    int month;
    int dateNo;
    int year;
public:
    friend istream& operator >>(istream &, Date &);
    friend ostream& operator <<(ostream &, Date &);
};
istream &operator >>(istream &input, Date &d)
{
cout<<"Enter day:";input>>d.day;
cout<<"Enter month:";input>>d.month;
cout<<"Enter dateNo:";input>>d.dateNo;
cout<<"Enter year:";input>>d.year;
return input;
}
ostream& operator <<(ostream &dout, Date &d)
{
dout<<"\nEnter day:"<<d.day;
dout<<"\nEnter month:"<<d.month;
dout<<"\nEnter dateNo:"<<d.dateNo;
dout<<"\nEnter year:"<<d.year;
return dout;
}
