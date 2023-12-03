#include "Contact.h"
#include<iostream>
#include<string>
#include"PhoneNumper.h"
using namespace std;
Contact::Contact()
{
    //ctor
    ph = new PhoneNumper[10];
}

Contact::~Contact()
{
    //dtor
    delete [] ph;
}
void Contact::add_num()
{
    ph[count].set_all();
    count++;
}


void Contact::set_name(string fn,string ln)
{
    fname=fn;
    lname=ln;
}
void Contact::set_city(string c)
{
    city=c;

}
void Contact::set_gender(int g)
{
    gender=g;
}
void Contact::set_email(string n)
{
    email=n;
}
void Contact::set_id(int i)
{
    id=i;
}
void Contact::set_serial_num(int s)
{
    serial=s;
}
int Contact::get_serial_num()
{
    return serial;
}
string Contact::get_name()
{
    return fname+" "+lname;
}
string Contact::get_city()
{
    return city;
}
string Contact::get_email()
{
    return email;
}
int Contact::get_gender()
{
    return gender;
}
int Contact::get_id()
{
    return id;
}
void Contact::set_all()
{
    cout<<"Enter the first name\n";
    cin>>fname;
    cout<<"Enter the last name\n";
    cin>>lname;
    cout<<"Enter gender (0-femail /1-male)\n";
    cin>>gender;
    cout<<"Enter the name of the city\n";
    cin>>city;
    cout<<"Enter the email addresse \n";
    cin>>email;
    cout<<"Enter your id\n";
    cin>>id;
    cout<<"Enter the serial number for this contact\n";
    cin>>serial;
     char choice='y';
     while(choice=='y'||choice=='Y')
     {
         add_num();
         cout<<"Do you want to add another number? (y/n)..?";
         cin>>choice;
     }
}
void Contact::display_contact()
        {
            cout
            <<"> first name:"<<fname
            <<"\n> last name:"<<lname
            <<"\n> gender:"<<gender
            <<"\n> city:"<<city
            <<"\n> email addresse:"<<email
            <<"\n> id:"<<id
            <<"\n> serial numer:"<<serial
            <<endl;
            for(int i=0;i<count;i++)
            {
                if(i>0&&i<count-1)
                    cout<<"**********\n";
                ph[i].display();
            }
        }


