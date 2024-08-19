#include<iostream>

using namespace std;
//creating structure customers
struct customer{
    //initialising all variables
    float n;
    float m;
    float p;
    float price_n;
    float price_m;
    float price_p;
    float tot_price;
  //creating struct function for calculation of prices
    void disc(float & price_n,float & price_m,float & price_p/*call by reference*/){
     price_n=n*1500;
     price_m=m*200;
     price_p=p*450;
     price_n=(price_n)-((price_n)/20);
     price_m=(price_m)-((3*price_m)/20);
     price_p=(price_p)-((price_p)/10);     
    }
    void setTotal(){       
    disc(price_n,price_m,price_p);
    tot_price=price_n+price_m+price_p;/*initialsing total price*/
    tot_price=tot_price+(tot_price/10);/*updating total price*/
    cout << "Total price is " << tot_price << endl;
    }
    
};
int main(){
    customer c1 ;/*creating object*/
    cin>>c1.n;/*no of miners*/
    cin>>c1.m;/*no of toasters*/
    cin>>c1.p;/*no of fans*/
    c1.setTotal();/*calling structure function*/

    return 0;
}
