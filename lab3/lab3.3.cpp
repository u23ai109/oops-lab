#include<iostream>
#include<string.h>
using namespace std;

class taxes{
     string name;
     int income;
     float tax;

    public:
     void input(){
        cout<<"enter individual's name "<<endl;
        cin>>name;
        cout<<"enter indivudial's income "<<endl;
        cin>>income;
     }
     
     void compute(){
        if(income <=100000){
            tax = 0;
        }else if(income <=150000){
            tax=(income -100000) * 0.1;
        }else if(income <=200000){
            tax= 0 + ((150000 - 100000) * 0.1) + (income -150000)*0.2;
        }else{
            tax= 0 + ((150000-100000) * 0.1) + ((200000-150000) * 0.2)+(income  - 200000)*0.3;
        }
     }

     void output(){
        cout<<"indivudial's name is "<<name<<endl;
        cout<<"indivudial's income is "<<income<<endl;
        cout<<"indivudial's tax is "<<tax<<endl;
     }
};

int main(){
    taxes t1;
    t1.input();
    t1.compute();
    t1.output();

    return 0;
}