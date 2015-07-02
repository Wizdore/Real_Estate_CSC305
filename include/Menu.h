#ifndef MENU_H
#define MENU_H
#include "../Shoikoth/person.hpp"
class Menu
{
protected:

public:

    void mainMenu()
    {
        cout<<"1.Log in."<<endl;
        cout<<"2.Sign up."<<endl;
        cout<<"3.Forgot Password."<<endl;
    }

private:
    void display(Person* p)
    {
        if(p->getType() == "c") cMenu(p);
        if(p->getType() == "e") eMenu(p);
        if(p->getType() == "v") vMenu(p);
        if(p->getType() == "p") pMenu(p);
    }

<<<<<<< HEAD
    void customerMenu()
=======
    void cMenu(Person* p)
>>>>>>> parent of e0d7194... Menu changes
    {

    }

<<<<<<< HEAD
    void employeeMenu()
=======
    void eMenu(Person* p)
>>>>>>> parent of e0d7194... Menu changes
    {

    }

<<<<<<< HEAD
    void vendorMenu()
=======
    void vMenu(Person* p)
>>>>>>> parent of e0d7194... Menu changes
    {

    }

<<<<<<< HEAD
    void personMenu()
=======
    void pMenu(Person* p)
>>>>>>> parent of e0d7194... Menu changes
    {

    }
};

#endif // MENU_H
