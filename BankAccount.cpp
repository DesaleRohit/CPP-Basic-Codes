#include <iostream>
using namespace std;

class BankAccount {
private:
    string accountHolder;
    double balance;

public:
    BankAccount(string name, double currentbal) {
        accountHolder = name;
        balance = currentbal;
    }

    void deposit(double amount) 
	{
        if (amount > 0) 
		{
            balance = balance + amount;
            cout << "Deposited: " << amount << "\n";
        } else 
		{
            cout << "Invalid deposit amount.\n";
        }
    }

    void withdraw(double amount) 
	{
        if (amount > 0 && amount <= balance) 
		{
            balance = balance - amount;
            cout << "Withdrawn: " << amount << "\n";
        } else 
		{
            cout << "Invalid or insufficient funds for withdrawal.\n";
        }
    }

    void displayBalance() const 
	{
        cout << "Account Holder: " << accountHolder << "\n";
        cout << "Current Balance: " << balance << "\n";
    }
};

int main() 
{
    BankAccount myAccount("Rohit Desale", 1000.0);
    myAccount.displayBalance();
    
    myAccount.deposit(500.0);
    myAccount.withdraw(200.0);
    myAccount.displayBalance();
    

    BankAccount m2("Dhanesh Dhobi", 50.0);
    m2.displayBalance();
    
    m2.deposit(50.0);
    m2.withdraw(200.0);
    m2.displayBalance();
    
    return 0;
}