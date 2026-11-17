#include <iostream> 
#include <string> 
using namespace std; 
class BankAccount 
{ 
    private: 
    int accountNumber; 
    string accountHolder; 
    double balance; 
    
    public: 
    void setAccountNumber(int accNum)
     { 
        accountNumber = accNum; 
    } 
    void setAccountHolder(string name)
     { 
        accountHolder = name; 
    } 
    void setBalance(double b) 
    { 
        if (b >= 0) 
           balance = b; 
        else 
        { 
            cout << "Invalid balance! Setting balance to 0." << endl; 
            balance = 0; 
        } 
    } 
    int getAccountNumber() 
    { 
        return accountNumber; 
    } 
    string getAccountHolder()
     { 
        return accountHolder; 
    } 
    double getBalance() 
    { 
        return balance; 
    } 
}; 
int main() 
{ 
    BankAccount acc; 
    acc.setAccountNumber(55441);
     acc.setAccountHolder("Bob"); 
     acc.setBalance(1500.50); 
     cout << "Account No: " << acc.getAccountNumber() << endl; 
     cout << "Holder: " << acc.getAccountHolder() << endl; 
     cout << "Balance: $" << acc.getBalance() << endl; 
     return 0; 
}