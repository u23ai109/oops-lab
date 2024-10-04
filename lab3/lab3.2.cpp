#include<iostream>
#include<string.h>
using namespace std;

class tele{
     string name;
     int calls;
     float bill;

    public:
     void input(){
        cout<<"enter subscriber's name "<<endl;
        cin>>name;
        cout<<"enter subscriber's calls "<<endl;
        cin>>calls;
     }
     
     void compute(){
        if(calls<=100){
             bill = 200;
        }else if(calls<=150){
            bill=200 + (calls-100) * 0.6;
        }else if(calls<=200){
            bill=200 + ((150 - 100) * 0.6) + (calls-150)*0.5;
        }else{
            bill=200 + ((150-100) * 0.6) + ((200-150) * 0.5)+(calls - 200)*0.4;
        }
     }

     void output(){
        cout<<"subscriber's name is "<<name<<endl;
        cout<<"subscriber's calls are "<<calls<<endl;
        cout<<"subscriber's bill is "<<bill<<endl;
     }
};

int main(){
    tele t1;
    t1.input();
    t1.compute();
    t1.output();

    return 0;
}