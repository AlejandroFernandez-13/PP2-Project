#include "BankProfile.h"

#include <string>
#include <cstring>

using std::string;

BankProfile::BankProfile(int accno, string fname,
    string lname, double bal)
{
    setAccountNumber(accno);
    setFirstName(fname);
    setLastName(lname);
    setBalance(bal);
}

void BankProfile::setAccountNumber(int accno)
{
    accountNumber = accno;
}

void BankProfile::setLastName(string lname)
{
    const char* ln = lname.data();
    int len = lname.size();
    len = (len < MAX_SIZE ? len : MAX_SIZE - 1);
    strncpy_s(lastName, ln, len);
    lastName[len] = '\0';
}

void BankProfile::setFirstName(string fname)
{
    const char* fn = fname.data();
    int len = fname.size();
    len = (len < MAX_SIZE ? len : MAX_SIZE - 1);
    strncpy_s(firstName, fn, len);
    firstName[len] = '\0';
}

void BankProfile::setBalance(double bal)
{
    balance = bal;
}

int BankProfile::getAccountNumber() const
{
    return accountNumber;
}

string BankProfile::getFirstName() const
{
    return firstName;
}

string BankProfile::getLastName() const
{
    return lastName;
}

double BankProfile::getBalance() const
{
    return balance;
}

BankProfile::~BankProfile()
{
}
