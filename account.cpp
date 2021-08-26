#include "account.h"
#include <iostream>
#include <bank.h>
using namespace std;
void account::modify(){
    cout<<"Account number  : "<<endl;
    cin.ignore();
    cin>>acno;
    cout<<"Name : "<<endl;
    cin.ignore();
    cin>>name;
    cout<<"Modify type of account : "<<endl;
    cin>>type;

    type=toupper(type);
    cout<<"Account is done."<<endl;
}

bool account::delete_account(){
    cout<<"Account Deleted."<<endl;
}

static const QString path = "../asdadasdasdman.db";
account::account()
{
    self = new DbManager(path);

    self -> isOpen();
}




