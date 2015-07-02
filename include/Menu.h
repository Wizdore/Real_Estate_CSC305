#ifndef MENU_H
#define MENU_H
#include "../Shoikoth/person.hpp"
class Menu
{
protected:

    Person* p;
public:

    void mainMenu(Person* p)
    {
        this.p = p;

        int ch;
        cout<<"1.Log in."<<endl;
        cout<<"2.Sign up."<<endl;
        cout<<"3.Forgot Password."<<endl;
        cin>>ch;

        if(ch==1)
    }

private:
    void display()
    {
        if(p->getType() == "c") cMenu(p);
        if(p->getType() == "e") eMenu(p);
        if(p->getType() == "v") vMenu(p);
        if(p->getType() == "p") pMenu(p);
    }

<<<<<<< HEAD
    void cMenu(Person* p)
=======
    void customerMenu()
>>>>>>> parent of a61c5c0... resolved
    {

    }

<<<<<<< HEAD
    void eMenu(Person* p)
=======
    void employeeMenu()
>>>>>>> parent of a61c5c0... resolved
    {

    }

<<<<<<< HEAD
    void vMenu(Person* p)
=======
    void vendorMenu()
>>>>>>> parent of a61c5c0... resolved
    {

    }

<<<<<<< HEAD
    void pMenu(Person* p)
=======
    void personMenu()
>>>>>>> parent of a61c5c0... resolved
    {

    }
};

#endif // MENU_H
