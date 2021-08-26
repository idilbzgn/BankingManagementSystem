#ifndef BANK_H
#define BANK_H
#include <iostream>


using namespace std;
class bank
{
    string name;
    string password;
    string addr;
    string deposit;
    float balance;
    string acno;


public:

    void open_account();
    void deposit_money();
    void withdraw_money();
    void display_account();
    int retdeposit() const;
};
#endif // BANK_H
