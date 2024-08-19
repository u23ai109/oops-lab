#include<iostream>
#include<string.h>
using namespace std;

class account{
    static int acc_no;

    string name;
    int amount;

    public:
     account(string n){
        name=n;
        acc_no++;
        cout<<"enter amount"<<endl;
        cin>>amount;
     }

     void deposit(int i){
        amount=amount+i;
        cout<<"amount "<<i<<" added into account"<<endl;
     }

     void withdraw(int i){
        amount=amount-i;
        cout<<"amount "<<i<<" withdrawn from account"<<endl;
     }

     void checkBalance(){
        cout<<"account holder "<<name<<endl;
        cout<<"account no"<<acc_no<<endl;
        cout<<"balance amount : "<<amount<<endl;
     }

};

int account::acc_no=0;

int main(){
    account a1("tej");
    a1.deposit(5000);
    a1.withdraw(10000);
    a1.checkBalance();

    account a2("sarath");
    a2.deposit(50000);
    a2.withdraw(1000);
    a2.checkBalance();

    return 0;
}