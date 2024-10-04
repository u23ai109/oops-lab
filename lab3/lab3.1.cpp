#include<iostream>
#include<string.h>
using namespace std;

class employee{
     string name;
     int earning;
     int bonus;

    public:
     
     void input(){
        cout<<"enter employee's name "<<endl;
        cin>>name;
        cout<<"enter employee's salary "<<endl;
        cin>>earning;
     }

     void display(){
        cout<<"employee's name is "<<name<<endl;
        cout<<"employee's salary is "<<earning<<endl;
        cout<<"employee's salary including bonus is "<<bonus<<endl;
     }
    

     void bonuss(){
        if(earning>=2000){
            bonus=earning+earning/10;
            display();
        }else{
            bonus=earning;
            cout<<"No bonus ra lanja "<<endl;
        }
     }

     
     
};

int main(){
    employee e1;
    e1.input();
    e1.bonuss();

    return 0;
}