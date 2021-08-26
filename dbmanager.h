#ifndef DBMANAGER_H
#define DBMANAGER_H
#include <QSqlDatabase>
#include <iostream>
#include <QDebug>
using namespace std;

class DbManager
{
public:
    DbManager(const QString& path);

    ~DbManager();

    bool isOpen() ;

    bool createTable();

    bool addAccount(const QString &name, const QString &addr,const QString password,const QString acno,const QString deposit);

    void printAllAccount();

private:
    QSqlDatabase m_db;

};


#endif // DBMANAGER_H
