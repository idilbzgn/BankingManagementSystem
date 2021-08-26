#ifndef ACCOUNT_H
#define ACCOUNT_H


#include <bank.h>
#include <iostream>
#include <dbmanager.h>

using namespace std;

class account
{


    string name;
    string password;


    char type;
    string acno;
    DbManager* self;

public:
  void modify();
  void changePassword();
  bool delete_account();
  int retacno() const;
  char rettype() const;
  account();

};

#endif // ACCOUNT_H
