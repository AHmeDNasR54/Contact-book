#ifndef PHONENUMPER_H
#define PHONENUMPER_H
#include<iostream>
#include<string>
using namespace std;

class PhoneNumper
{
private:
    string phone;
    string type;
    public:
        PhoneNumper();
        PhoneNumper(string phone,string type);
        void setphone(string p);
        string getphone();
        void settype(string t);
        string gettype();
     void set_all();
     void display();
        virtual ~PhoneNumper();

    protected:

};

#endif // PHONENUMPER_H
