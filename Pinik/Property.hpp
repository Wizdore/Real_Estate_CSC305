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
    string type;
    Vendor owner;
    vector<string> features;
    double buyPrice;
    double sellPrice;
    Date availableDate;
    static int AvId;

public:
    int id;

    string getType()
    {
        return type;
    }
    Vendor getOwner()
    {
        return owner;
    }
    vector<string> getFeatures()
    {
        return features;
    }
    double getBuyPrice()
    {
        return buyPrice;
    }
    double getSellPrice()
    {
        return buyPrice;
    }
    Date getAvailableDate()
    {
        return availableDate;
    }
    Property()
    {
        id = AvId;
        AvId++;
    }


};


int Property::AvId = 0;

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
