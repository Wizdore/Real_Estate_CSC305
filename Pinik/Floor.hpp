#include<iostream>
#include <vector>
#include "Room.hpp"
using namespace std;

class Floor
{
protected:
    string name;
    int number;
    vector<Room> rooms;
    static int AvId;
public:
    int id;
    Floor()
    {
        id = AvId;
        AvId++;
    }
};

int Floor::AvId = 0;
