#include <iostream>
#include <stdio.h>
#include <vector>
#include <string>
#define MAX 100
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

protected:
    int* data; // array of elements
    int myCapacity; // length of array
    int length; // number of elements added
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

