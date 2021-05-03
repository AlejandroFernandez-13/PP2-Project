#ifndef BANKEMI_H
#define BANKEMI_H

#include <mysql/mysql.h>
#include <string>
class BankProfile;

using namespace std;
class BankEmi
{
public:
    BankEmi(const string = "localhost",
        const string = "",
        const string = "", const string = "");
    ~BankEmi();
    void createAccount(BankProfile*);
    void closeAccount(int);
    void deposit(int, double);
    void withdraw(int, double);
    BankProfile* getAccount(int);
    void printAllAccounts();
    void message(string);

private:
    MYSQL* db_conn;
};

#endif
