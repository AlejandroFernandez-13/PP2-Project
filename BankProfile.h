#ifndef BANKProfile_H
#define BANKProfile_H

#include <string>
using std::string;

class BankProfile
{
public:
    static const int MAX_SIZE = 30;

    BankProfile(int = 0, string = "",
        string = "", double = 0.0);
    ~BankProfile();

    void setAccountNumber(int);
    void setLastName(string);
    void setFirstName(string);
    void setBalance(double);

    int getAccountNumber() const;
    string getFirstName() const;
    string getLastName() const;
    double getBalance() const;

private:
    int accountNumber;
    char firstName[MAX_SIZE];
    char lastName[MAX_SIZE];
    double balance;
};

#endif
