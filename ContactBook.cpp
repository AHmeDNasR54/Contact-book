#include "ContactBook.h"
#include "Contact.h"
#include<iostream>
#include<string>
#include"PhoneNumper.h"
using namespace std;

ContactBook::ContactBook()
{
    //ctor
}

ContactBook::~ContactBook()
{
    //dtor
}

void ContactBook::search()
{
    int s,test=0;
    cout<<"Enter the serial number to search\n";
    cin>>s;
    for(int i=0; i<count; i++)
    {
        if (s==con[i].get_serial_num())                  //c.get_serial_num())
        {
            test++;
            con[i].display_contact();
            break;
        }
        else continue;
    }
    if(test==0)
        cout<<"this contact is not exist\n";
}
void ContactBook::add()
{
    Contact c;
    c.set_all();
    con[count]=c;
    count++;
}
void ContactBook::deletee()
{
    cout<<"Enter the serial number of the contact  you want to delete \n";
    int z,s,test_exist=0;
    cin>>s;
    for(int i=0; i<count; i++)
    {
        if(con[i].get_serial_num()==s)
        {
            test_exist++;
            z=i;
            for(int x=z; x<count; x++)
                con[x]=con[x+1];
            break;
        }
    }
    if(test_exist>0)
    {
        cout<<"the contact is deleted \n";
        count--;
    }
    else cout<<"this contact is not exist\n";
}
void ContactBook::display()
{
    if(count!=0)
        for (int i=0; i<count; i++)
        {
            con[i].display_contact();
            if(i!=count-1)
                cout<<"************\n";
        }
    else cout<<"There isn't any contact to display\n";

}


