#include <iostream>
using namespace std;
class SavingsAccount;

class Bank {
public:
    void calculateInterest(SavingsAccount &savingsAccount);
};
class Account {
private:
    double balance;
    int accountNumber;

public:
    Account(double bal, int accNum) : balance(bal), accountNumber(accNum) {}
    
    double getBalance() const {
        return balance;
    }

    int getAccountNumber() const {
        return accountNumber;
    }
    friend class Bank;
};
class SavingsAccount : public Account {
private:
    double interestRate;

public:
    SavingsAccount(double bal, int accNum, double rate) : Account(bal, accNum), interestRate(rate) {}

    double getInterestRate() const {
        return interestRate;
    }
    friend class Bank;
};
void Bank::calculateInterest(SavingsAccount &savingsAccount) {
    double interest = (savingsAccount.getBalance() * savingsAccount.getInterestRate()) / 100;
    cout << "Account Balance: " << savingsAccount.getBalance() << endl;
    cout << "Interest Earned: " << interest << endl;
}

int main() {
    double balance, interestRate;
    int accountNumber;
    cout << "Enter Balance: ";
    cin >> balance;
    cout << "Enter Interest Rate: ";
    cin >> interestRate;
    cout << "Enter Account Number: ";
    cin >> accountNumber;
    SavingsAccount savings(balance, accountNumber, interestRate);
    Bank bank;
    bank.calculateInterest(savings);

    return 0;
}

   