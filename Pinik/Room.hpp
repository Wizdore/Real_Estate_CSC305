#include<iostream>
#include <vector>
using namespace std;

class Room
{
protected:

    string name;
    int sizeSqFt;
    vector<string> features;
    static int AvId;
public:

    int id;
    Room()
    {
        id = AvId;
        AvId++;
    }
};

int Room::AvId =0;
