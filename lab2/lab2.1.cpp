#include<iostream>
using namespace std;
class order{
    private:
     int n;
     int m;
     int p;
     float price_n;
     float price_m;
     float price_p;
     int cost;

    public:
     order(int n,int m,int p){
        this->n=n;
        this->m=m;
        this->p=p;
     }

     inline int discount(int cost){return (cost+(cost/10));}

     void price(){
        
        price_n=n*1500;
        price_m=m*200;
        price_p=p*450;
        price_n=(price_n)-((price_n)/20);
        price_m=(price_m)-((3*price_m)/20);
        price_p=(price_p)-((price_p)/10);
        cost=price_n+price_m+price_p;
        cost=discount(cost);
     }

     void display(){
        cout<<"the total cost of ur purchase is "<<cost<<endl;
     }
};

int main(){
    order o1(5,6,7);
    o1.price();
    o1.display();

    return 0;
}