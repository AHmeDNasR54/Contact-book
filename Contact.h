#ifndef CONTACT_H
#define CONTACT_H
#include<iostream>
#include<string>
#include"PhoneNumper.h"
using namespace std;

class Contact
{
private:
    int count=0, id;
    int serial;
    int gender;
    string fname;
    string lname;
    string city;
    string email;
    PhoneNumper *ph;


public:
    void set_name(string fn,string ln);
    void set_gender(int g);
    void set_city(string c);
    void set_serial_num(int s);
    void set_email(string n);
    void set_id(int i);
    void add_num();
    void display_contact();
    int get_serial_num();
    string get_name();
    string get_city();
    int get_gender();
    string get_email();
    int get_id();
    void set_all();


    Contact();
    virtual ~Contact();

protected:

};

#endif // CONTACT_H
