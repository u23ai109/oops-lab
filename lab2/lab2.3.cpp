#include<iostream>
using namespace std;

class data{
   private:
    int day;
    int month;
    int year;

   public:
    data(){
        day=12;
        month=3;
        year=1993;
    }
    
    data(int day,int month,int year){
        this->day=day;
        this->month=month;
        this->year=year;
    }

    data(data &obj){
        day=obj.day;
        month=obj.month;
        year=obj.year;
    }  

    void display(){
        cout<<"date is "<<day<<endl;
        cout<<"month is "<<month<<endl;
        cout<<"year is "<<year<<endl;
    } 
};

int main(){
    data d1;
    data d2(12,10,2000);
    data d3(d1);
    data d4(d2);
    d1.display();
    d2.display();
    d3.display();
    d4.display();
}