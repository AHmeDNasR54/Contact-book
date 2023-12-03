#ifndef CONTACTBOOK_H
#define CONTACTBOOK_H
#include<iostream>
#include<string>
#include"PhoneNumper.h"
#include"contact.h"
using namespace std;
class ContactBook
{
private:

    int count=0;
    Contact con[10];
    public:
        void search();
        void add();
        void deletee();
        void display();
        ContactBook();
        virtual ~ContactBook();

    protected:


};

#endif // CONTACTBOOK_H
