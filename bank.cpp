#include "bank.h"
#include <iostream>


using namespace std;


void bank::open_account(){
    cout<<"Enter your name : " <<endl;
    cin.ignore();
    cin>>name;
    cout<<"Enter your address : " <<endl;
    cin.ignore();
    cin>>addr;
    cout<<"Account Number : "<<endl;
    cin.ignore();
    cin>>acno;
    cout<<"Enter your first deposit amount : " <<endl;
    cin.ignore();
    cin>>balance;
    cout<<"Password : "<<endl;
    cin>>password;

    cout<<"ACCOUNT İS CREATED."<<endl;
}

void bank::deposit_money(){
    int x;
    cout<< "Enter amount you want to deposit : "<<endl;
    cin>>x;
    balance=balance+x;
    cout<<"Your total balance is :  " <<balance<<endl;
}
void bank::withdraw_money(){
    int y;
    cout<<"Enter amount you want to withdraw : "<<endl;
    cin>>y;
    balance= balance - y;
     cout<<"Your balance is :  " <<balance<<endl;
}
void bank::display_account(){
    cout<<"YOUR NAME : " <<name<<endl;

    cout<<"YOUR ADDRESS : " <<addr<<endl;

    cout<< "TOTAL BALANCE: "<<balance<<endl;
}
