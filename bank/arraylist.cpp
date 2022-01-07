#include <iostream>
#include "arraylist.h"
#define MAX 100
#include <vector>
#include <array>

using namespace std;

arraylist::arraylist()
{
    length=0;
}

void arraylist::add()
{
    int id1;
    do
    {
        cout<<"Enter ID: ";
        cin>>id1;
        data[length]=id1;
        length++;
    }
    while(id1!=-1);
    //data[length]=id;
    length=length-1;
    cout<<"\nLength:"<<length;

    //data[length]=val;
    //length++;
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
    int n;
    for(int i=length;i>index;i--)
    {
        data[i]=data[i-1];
    }
    data[index]=val;
    length++;
    n=length;
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
}

void Bank::read()
{
    add();
    cout<<"\nTille herer";
    n=length;
    cout<<"\nAfter lng";
    for(int i=0;i<length;i++)
    {
        cout<<"Enter account number: ";
        string acc_no,name,acc_type;
        cin>>acc_no;
        cout<<"Enter name: ";
        cin>>name;
        cout<<"Enter account type: ";
        cin>>acc_type;
        v1.push_back(acc_no);
        v2.push_back(name);
        v3.push_back(acc_type);
    }


    //cout<<"Enter account number: ";
    //cin>>acc_no;

    //cout<<"Enter account type: ";
    //cin>>acc_type;


//    add(name);
  //  add(acc_no);
    //add(acc_type);

}

void Bank::display()
{

    cout<<"Working\n";
    for (int i = 0; i < v1.size(); ++i)
        cout << v1[i] << " ";
    cout<<"\n";
    for(int i=0;i<v2.size();++i)
        cout<<v2[i]<<" ";
    cout<<"\n";
    for(int i=0;i<v2.size();++i)
        cout<<v3[i]<<" ";
    cout<<"\n";
    //Display();
    //cout<<"Name: "<<name;
    //cout<<"account num:  "<<acc_no;
    //cout<<"account type: "<<acc_type;

}


