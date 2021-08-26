#include <QCoreApplication>
#include <iostream>
#include <account.h>
#include <bank.h>
#include "dbmanager.h"

#include <QString>
#include <QDebug>
using namespace std;

static const QString path = "../idil.db";

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);


  account obj1;
  bank obj;
  //DbManager m_db(path);
  int ch;
  char option;



cout<<"----------------------------------------------"<<endl;
cout<<"-------------------LEO BANK-------------------"<<endl;
cout<<"----------------------------------------------"<<endl;
s:
cout<<"1.Open Account : "<<endl;
cout<<"2.Deposit Money : "<<endl;
cout<<"3.Withdraw Money : "<<endl;
cout<<"4.Display Account : "<<endl;
cout<<"5.Modify Account : "<<endl;
cout<<"6.Delete account : "<<endl;
cout<<"7.EXİT"<<endl;

cin>>ch;


switch(ch){

    case 1:
    cout<<"Open Account : "<<endl;
    obj.open_account();
    break;

case 2:
    cout<<"Deposit Money : "<<endl;
    obj.deposit_money();
    break;
case 3:
    cout<<"Withdraw Money : "<<endl;
    obj.withdraw_money();
    break;
case 4:
    cout<<"Display Account : "<<endl;
    obj.display_account();
    break;
case 5:
    cout<<"Modify Account : "<<endl;
    obj1.modify();
    break;
case 6:
    cout<<"Delete Account : "<<endl;
    obj1.delete_account();
    break;
case 7:
    if(ch==7){
        exit(1);
    }
    break;

}
cin.ignore();
cout<<"Do you want to continue?(y/n)"<<endl;
option= getchar();
if((option=='n') || (option=='N')){
    return 0;
}
else {
   goto s;
}
 getchar();
 return a.exec();
}


