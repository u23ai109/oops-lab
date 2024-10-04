#include<iostream>
using namespace std;

class d1;

class c1{
    private:
     int a;
    
    public:
    c1(int a){
        this->a=a;
    }
     friend int mean(c1 & c, d1 & d);
};

class d1{
    private:
     int b;

    public:
    d1(int b){
        this->b=b;
    }
     friend int mean(c1 & c, d1 & d);
};

 int mean(c1 & c, d1 & d){
     return ( c.a + d.b )/2;
}

int main(){
    c1 m(6);
    d1 n(10);

    cout<<"mean of the two numbers is "<<mean(m,n)<<endl;

    return 0;
}