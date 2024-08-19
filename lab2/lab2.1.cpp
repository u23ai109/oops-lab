#include<iostream>
using namespace std;

// creating class with required variables
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
//creating constructor for initialising variables
     order(int n,int m,int p){
        this->n=n;
        this->m=m;
        this->p=p;
     }

     inline int discount(int cost){return (cost+(cost/10));}//creating inline function that returns the final price


//function for calculating total price
     void price(){
        //declaring price
        price_n=n*1500;
        price_m=m*200;
        price_p=p*450;
         //calculating price after discount
        price_n=(price_n)-((price_n)/20);
        price_m=(price_m)-((3*price_m)/20);
        price_p=(price_p)-((price_p)/10);
        cost=price_n+price_m+price_p;//suuming the prices
        cost=discount(cost);//adding tax and returning final price
     }

//function to display total price of purchase
     void display(){
        cout<<"the total cost of ur purchase is "<<cost<<endl;
     }
};

int main(){
    //creating object and passing arguments
    order o1(5,6,7);
    o1.price();//calculating price
    o1.display();//returning the price

    return 0;
}
