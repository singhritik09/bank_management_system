#include <iostream>
#include "arraylist.cpp"

using namespace std;

int main()
{

    Bank b1;
    arraylist ar;
    ar.add();
    //ar.Display();
    //system("pause");
    //b1.add();
    b1.readdb();
    b1.displaydb();

    /*
    int userinput;
    cout<<"********************************BANK MANAGEMENT INTERFACE***********************************************\n"<<endl;
    while(1)
    {

        cout<<"Enter 1 to add customers to db of bank:"<<endl;
        cout<<"Enter 2 to read database"<<endl;
        cout<<"Enter 3 to Create New User:"<<endl;
        cout<<"Enter 4 to Display New User details:"<<endl;
        cout<<"Enter 5 to Deposit Money for user:"<<endl;
        cout<<"Enter 6 to Withdraw Money for user:"<<endl;
        cout<<"Enter 7 to Exit:"<<endl;
        cout<<"Enter your choice:";
        cin>>userinput;
        cout<<"\n";
        switch(userinput)
        {
        case 1:
            //b1.readdb();
            break;
        case 2:
            b1.displaydb();
            break;
        case 3:
            b1.create();
            break;
        case 4:
            b1.displayuser();
            break;
        case 5:
            b1.deposit();
            break;
        case 6:
            b1.withdraw();
            break;
        case 7:
            exit(1);
        default:
            cout<<"\nxxxxxxxxxxxxx Wrong Choice xxxxxxxxx";
        }
    }
    cout<<"\n*************************************************************";

    */
    return 0;
}
