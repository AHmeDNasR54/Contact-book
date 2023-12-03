#include "PhoneNumper.h"
#include<iostream>
#include<string>
using namespace std;

PhoneNumper::PhoneNumper(string phone,string type)
{
    this->phone=phone;
    this->type=type;
}
PhoneNumper::PhoneNumper()
{
    phone="there is no num/n";
    type="there is no type/n";
}

PhoneNumper::~PhoneNumper()
{
    //dtor
}
void PhoneNumper::setphone(string phone)
{
   this->phone=phone;
}
string PhoneNumper::getphone()
{
    return phone;
}
void PhoneNumper::settype(string type)
{
   this->type=type;
}
string PhoneNumper::gettype()
{
    return type;
}

void PhoneNumper::set_all()
{
    cout<<"Enter phone number \n";
    cin>>phone;
   // setphone(phone);
    cout<<"What the type of this number (work,home,mobile)?\n";
    cin>>type;
   // settype(type);

}
void PhoneNumper::display()
{
    cout<<"Number: "<<phone<<endl;
    cout<<"Type: "<<type<<endl;

}


