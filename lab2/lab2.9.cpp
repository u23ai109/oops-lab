#include<iostream>
#include<string.h>
using namespace std;

class book{
    string name;
    int cost;

    public:
     book(string name,int cost){
        this->name=name;
        this->cost=cost;
     }

     friend void compare(book &obj1,book &obj2);
};

void compare(book &obj1,book &obj2){
    if(obj1.cost>obj2.cost){
        cout<<obj2.name <<" is cheaper"<<endl;
    }else{
        cout<<obj1.name <<" is cheaper"<<endl;
    }
}

int main(){
    book b1("harry_potter",7000);
    book b2("The_Boys",9000);

    compare(b1,b2);

    return 0;
}