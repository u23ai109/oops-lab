#include<iostream>
#include<string.h>
using namespace std;

// Define an 'account' class to represent a bank account
class account {
    static int acc_no; // Static variable to track the account number (shared among all objects)

    string name; // Name of the account holder
    int amount;  // Current balance in the account

    public:
     // Constructor that initializes account holder's name and sets an initial balance
     account(string n) {
        name = n;
        acc_no++; // Increment the account number for each new account
        cout << "Enter amount" << endl;
        cin >> amount;
     }

     // Method to deposit a specified amount into the account
     void deposit(int i) {
        amount = amount + i;
        cout << "Amount " << i << " added into account" << endl;
     }

     // Method to withdraw a specified amount from the account
     void withdraw(int i) {
        amount = amount - i;
        cout << "Amount " << i << " withdrawn from account" << endl;
     }

     // Method to check and display the account details and balance
     void checkBalance() {
        cout << "Account holder: " << name << endl;
        cout << "Account no: " << acc_no << endl;
        cout << "Balance amount: " << amount << endl;
     }
};

// Initialize the static account number to 0
int account::acc_no = 0;

int main() {
    // Create first account with the name 'tej' and perform operations
    account a1("tej");
    a1.deposit(5000);
    a1.withdraw(10000);
    a1.checkBalance();

    // Create second account with the name 'sarath' and perform operations
    account a2("sarath");
    a2.deposit(50000);
    a2.withdraw(1000);
    a2.checkBalance();

    return 0;
}
