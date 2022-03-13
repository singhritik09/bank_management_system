#include <iostream>
#include "arraylist.h"
#define MAX 100
#include <vector>
#include <array>
#include <string>

using namespace std;

arraylist::arraylist()
{
    length=0;
}

void arraylist::add()
{
    int id=0;
    while(id!=-1)
    {
        cout<<"Enter Unique code given to each customer: ";
        cin>>id;
        data[length]=id;
        length++;
    }
    while(id!=-1);
    length=length-1;
    cout<<"Length: "<<length;
}

void arraylist::remove(int index)
{
    for(int i=index;i<length;i++)
    {
        data[i]=data[i+1];
    }
    length--;
}
int arraylist::size()
{
    return length;
}
bool arraylist::isEmpty()
{
    return length == 0;
}

void arraylist::insert(int index,int val)
{
    //int n;
    for(int i=length;i>index;i--)
    {
        data[i]=data[i-1];
    }
    data[index]=val;
    length++;
    //n=length;
}

int arraylist::get(int index)
{
    return data[index];
}

void arraylist::Display()
{
    for(int i=0;i<length;i++)
    {
        cout<<"NAME:"<<data[i]<<endl;

    }
}

void arraylist::deleteitem(int val)
{
    int i;
    for(i=0;i<length;i++)
    {
        if(data[i]==val)
            break;
    }
    if (i < length)
    {
    // reduce size of array and move all
    // elements on space ahead
    length = length - 1;
    for (int j=i; j<length; j++)
        data[j] = data[j+1];
    }
}

/*BANK CLASS ***********************************************************************/

Bank::Bank()
{
    n=0;
    //total=0;
    //amount=0;

}

void Bank::readdb()
{   //ERROR IN CALLING LENGTH AND ADD OF ARRAY LIST
    //ERROR IS IN FUNCTION CALL
    //add();
    add();    //FUNCTION CALL FROM PARENT
    n=arraylist::length;
    for(int i=0;i<n;i++)
    {
        string name,acc_no,acc_type;
        cout<<"Enter name: ";
        cin>>name;

        cout<<"Enter account number: ";
        cin>>acc_no;

        cout<<"Enter account type: ";
        cin>>acc_type;
        v1.push_back(name);
        v2.push_back(acc_no);
        v3.push_back(acc_type);
    }

}

void Bank::displaydb()
{
    cout<<"***********DATABASE OF CUSTOMERS ADDED*******************";
    cout<<"Working\n";
    //IF V1 SIZE IS EQUAL TO V2 AND V3
    for (int i = 0; i < v1.size(); ++i)
    {
        cout<<"Name:" << v1[i] << "\t"<<"Account number:"<<v2[i]<<"\t"<<"Account type:"<<v3[i];
        cout<<"\n";
    }
    cout<<"\n";
    cout<<"*********************************************************";

}


void Bank::create()
{
    cout<<"Enter Name: ";
    cin>>nm;
    cout<<"Enter Account Number:";
    cin>>an;
    cout<<"Enter Account Type: ";
    cin>>act;
    cout<<"Enter pin for generation:";
    cin>>pin;
    cout<<"Enter amount for deposit: ";
    cin>>total;
}

void Bank::displayuser()
{
    cout<<"Name: "<<nm<<endl;
    cout<<"Account number: "<<an<<endl;
    cout<<"Account type: "<<act<<endl;
    cout<<"Total Money: "<<total<<endl;
}

void Bank::deposit()
{
    int choice;
    cout<<"Enter Amount for deposit: ";
    cin>>amount;
    total=total+amount;
    while(1){
            cout<<"Enter 1 for receit"<<endl;
            cout<<"Enter 2 for main menu"<<endl;
            cout<<"Enter choice: ";
            cin>>choice;
            cout<<"\n";
        switch(choice){
    case 1:
        cout<<"\n_____Total Amount______: "<<total<<endl;
        cout<<"_______Amount deposited______: "<<amount<<endl;
        cout<<"_____At Bangalore Bank acc no xxxxxx637_____"<<"\t"<<"AT:14:27hrs"<<endl;
        break;
    case 2:
        exit(1);
    default:
        cout<<"\n________Wrong Choice_____";
    }
}

}

void Bank::withdraw()
{
    int choice;
    cout<<"Enter Amount for withdraw: ";
    cin>>amount;
    total=total-amount;
    cout<<"Do you want receit: press 1";
    while(1)
        {
            cout<<"Enter 1 for receit"<<endl;
            cout<<"Enter 2 for main menu"<<endl;
            cout<<"Enter choice: ";
            cin>>choice;
            cout<<"\n";
        switch(choice){
    case 1:
        cout<<"\n_____Total Amount______: "<<total<<endl;
        cout<<"_______Amount deposited______: "<<amount<<endl;
        cout<<"_____At Bangalore Bank acc no xxxxxx637_____"<<"\t"<<"AT:14:27hrs"<<endl;
        break;
    case 2:
        exit(1);
    default:
        cout<<"\n________Wrong Choice_____";
        }
    }

}
