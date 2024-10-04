#include <iostream>
#include <string.h>
using namespace std;

class account {
string name;
int acc_no;
string type;
float balance;

public:
void input(){
    cout<<"enter account name "<<endl;
    cin>>name;
    cout<<"enter account number "<<endl;
    cin>>acc_no;
    cout<<"enter account type "<<endl;
    cin>>type;
    cout<<"total balance"<<endl;
    cin>>balance;
}

void deposit(float amount ) {
      balance += amount; 
      cout << "Deposit successful. Current balance: " << balance <<endl; 
    }

void withdraw(float amount) {
      if (amount <= balance) { 
        balance -= amount; 
        cout << "Withdrawal successful. Current balance: " << balance << endl; 
      } else {
        cout << "Insufficient balance. Cannot withdraw." << endl;
      }
    }
void details(){
    cout<<"account name "<<name<<endl;
    cout<<"account number "<<acc_no<<endl;
    cout<<"account type "<<type<<endl;
    cout<<"total balance "<<balance<<endl;
}

};
int main(){
    account b1;
    b1.input();
    b1.deposit(7000);
    b1.withdraw(4000);
    b1.details();
}