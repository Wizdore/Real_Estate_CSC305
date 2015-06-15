#include<iostream>
#include "../Shoikoth/Person.hpp"
#include "../Shoikoth/Date.hpp"
#include "Room.hpp"
#include "Floor.hpp"
#include <vector>
using namespace std;

class Property
{
protected:
    string propType;
    Vendor owner;
    vector<string> features;
    double buyPrice;
    double sellPrice;
    Date available;

public:

};

class Plot : public Property
{
protected:
    Address adress;
    double sizeKatha;

public:


};

class Flat : public Property
{
protected:
    FlatAdress adress;
    int sizeSqft;
    vector<Room> rooms;

public:


};

class House : public Property
{
protected:
    HouseAddress adress;
    vector<Floor> floors;

public:


};
