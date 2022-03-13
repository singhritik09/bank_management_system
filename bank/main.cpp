#include <iostream>
#include <bits/stdc++.h>
#include <string>
#define MAX 30
using namespace std;

class arraylist
{
public:
    arraylist();
    void add();
    void deleteitem(int val);
    void Display();
    void clear();
    int get(int index); //const;
    void insert(int index, int value);
    bool isEmpty(); //const;
    void remove(int index);
    void set(int index, int value);
    int size(); //const;
    //string toString() const;

//protected:
    int* data; // array of elements
    int myCapacity; // length of array
    int length=0; // number of elements added
};
/*EMPLOYEE CLASS*/
class employee:public arraylist
{
public:
    void read_cap(int n)
    {
        myCapacity=n;
    }

    int *eid=new int(myCapacity);
    //char *name=new char[MAX];
     string name[MAX];
    //name=new string*(myCapacity);//new char[myCapacity];
    int *pin=new int(myCapacity);
    void read_employee(int myCapacity)
    {
        for(int i=0;i<myCapacity;i++)
        {
            cout<<"Enter ID: ";
            cin>>eid[i];
            cout<<"Enter name: ";
            cin>>name[i];
            //cout<<"Enter pin: ";
            //cin>>pin[i];
            length++;
        }

    }

    int total_employee()
    {
        return length;
    }

    void display_employee(int myCapacity){
        for(int i=0;i<myCapacity;i++)
        {
            cout<<"Employee ID: "<<eid[i]<<" Name: "<<name[i]<<endl;
        }
    }
};




/* **************************BANK CLASS*********************************/

class Bank:public arraylist
{
private:
    int length,n;
    int amount;
    int total;
    vector <string>v1;
    vector<string>v2;
    vector<string>v3;
    string nm,an,act,pin;

    //string name;
public:


    Bank();
    void readdb();
    void displaydb();

    void create();
    void displayuser();
    void deposit();
    void withdraw();
};




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

int main()
{
    int n;

    employee e1;
    Bank b1;
    /*
    cout<<"Enter n: ";
    cin>>n;
    e1.read_cap(n);
    //Bank b1;
    e1.read_employee(n);
    e1.display_employee(n);
    cout<<endl<<"Total Employees: "<<e1.total_employee()<<endl;
    */

    //arraylist ar;
    //ar.add();
    //ar.Display();
    //system("pause");
    //b1.add();
    //b1.readdb();
    //b1.displaydb();


    int userinput;
    cout<<"********************************BANK MANAGEMENT INTERFACE***********************************************\n"<<endl;
    while(1)
    {
        cout<<endl;
        cout<<"Enter 1 to add customers to db of bank:"<<endl;
        cout<<"Enter 2 to read database"<<endl;
        cout<<"Enter 3 to Create New User:"<<endl;
        cout<<"Enter 4 to Display New User details:"<<endl;
        cout<<"Enter 5 to Deposit Money for user:"<<endl;
        cout<<"Enter 6 to Withdraw Money for user:"<<endl;
        cout<<"Enter 7 to create new Employee: "<<endl;

        cout<<"Enter 9 to Exit:"<<endl;
        cout<<"Enter your choice:";
        cin>>userinput;
        cout<<"\n";
        cout<<endl;
        cout<<endl;
        switch(userinput)
        {
        case 1:
            b1.readdb();
            break;
        case 2:
            b1.displaydb();
            cout<<endl<<endl;
            break;
        case 3:
            b1.create();
            cout<<endl;
            break;
        case 4:
            b1.displayuser();
            break;
        case 5:
            b1.deposit();
            cout<<endl;
            break;
        case 6:
            b1.withdraw();
            cout<<endl;
            break;
        case 7:
            int n;

        cout<<"Enter n: ";
        cin>>n;
        e1.read_cap(n);
        e1.read_employee(n);
        e1.display_employee(n);
        e1.total_employee();
            break;
        case 9:
            exit(1);
        default:
            cout<<"\nxxxxxxxxxxxxxx Wrong Choice xxxxxxxxxxxxxxx";
        }
    }
    cout<<"\n********************************************************************************************************************";

    return 0;
}

