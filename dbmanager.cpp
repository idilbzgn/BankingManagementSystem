
#include "dbmanager.h"
#include <QSqlQuery>
#include <QSqlError>
#include <QSqlRecord>
#include <iostream>
#include <bank.h>
#include <account.h>

DbManager::DbManager(const QString& path)
{
    m_db = QSqlDatabase::addDatabase("QSQLITE");
    m_db.setDatabaseName(path);
    qDebug() << "Available Drivers " << m_db.drivers();
    qDebug()<<"Db object constructor...";

    m_db.open();
    /*if(!m_db.open())
    {
        qDebug()<<"Error. No connect..";
    }
    else
    {
        qDebug()<<"Connection is successfull..";

    }*/

    QSqlQuery query;
    //query.prepare("CREATE TABLE users(id INTEGER PRIMARY KEY, name TEXT, addr TEXT, acno INTEGER, deposit INTEGER, password INTEGER)" );
    query.exec("CREATE TABLE IF NOT EXISTS users (recId INTEGER PRIMARY KEY AUTOINCREMENT, name TEXT, addr TEXT, acno INTEGER, deposit INTEGER, password INTEGER)");


}


DbManager::~DbManager()
{
    if(m_db.isOpen())
    {
        m_db.close();
    }
}
bool DbManager::createTable()
{
    bool success = false;

    return  success;
}

bool DbManager::addAccount(const QString &name, const QString &addr,const QString password,const QString acno,const QString deposit)
{
    bool success = false;

    if(!name.isEmpty())
    {
        QSqlQuery queryAdd;
        queryAdd.prepare("INSERT INTO users (name, addr,acno,deposit,password) VALUES (:name, :addr, :acno,:deposit, :password)");
        queryAdd.bindValue(":name",name);
        queryAdd.bindValue(":addr",addr);
        queryAdd.bindValue(":acno",acno);
        queryAdd.bindValue(":deposit",deposit);
        queryAdd.bindValue(":password",password);
        if(queryAdd.exec())
        {
            success = true;
        }
        else
        {
            qDebug()<<"Add account failed.";
        }


    }
    else
    {
        qDebug()<<"Not empty...";
    }
    return success;
}

void DbManager::printAllAccount()
{
    qDebug()<<"Person in m_db: ";
    QSqlQuery query("SELECT * FROM users");
    int idName = query.record().indexOf("name");
    while(query.next())
    {
        QString name = query.value(idName).toString();
        qDebug()<<"=="<<name;
    }

}


bool DbManager::isOpen()
{
        createTable();
        addAccount("Ahmet", "mahallesi","123456789","500","112233");
        printAllAccount();
        qDebug()<<"End";
}


