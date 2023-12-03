#include<iostream>
#include<string>
#include "ContactBook.h"
#include "Contact.h"
#include"PhoneNumper.h"
using namespace std;

int main()
{
    cout<<"WELCOME TO CONTACT BOOK APPLICATION\n";
    cout<<"\tThe best APP for Contact\n";
    int counter=1,choice;
     ContactBook c;
    while(counter!=0)
    { if(counter!=1)
    cout<<"####################################################################################################\n";
        cout<<" [1] ADDING A NEW CONTACT\n [2] DELETING A CONTACT\n [3] SEARCHING FOR A CONTACT\n [4] DISPLAYING ALL CONTACTS\n [5]  EXITING THE PROGRAM :(\n";
        cout<<"Enter your choice \n";
        cin>>choice;
        switch(choice)
        {

        case 1:
        c.add();
            //adding
            break;
        case 2:
            c.deletee();
            break;
            //delete
        case 3:
            c.search();
            break;
            //search
        case 4:
            c.display();
            break;
            //print
        case 5:
            cout<<"THANK YOU FOR USING MY APP (:\n";
            counter=0;
            break;
        default:
            cout<<"Please enter a correct choice (1/2/3/4/5)/n";
        }
        if(counter!=0)
        counter++;
    }








    }

