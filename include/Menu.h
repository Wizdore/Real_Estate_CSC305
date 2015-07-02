#ifndef MENU_H
#define MENU_H

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

    void cMenu()
    {

    }

    void eMenu()
    {

    }

    void vMenu()
    {

    }

    void pMenu()
    {

    }
};

#endif // MENU_H
