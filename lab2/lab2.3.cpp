#include<iostream>
using namespace std;
//creating class with necessary variables
class data{
   private:
    int day;
    int month;
    int year;

   public
//creating default constuctor incase no argument is passed,intialises variables itself
    data(){
        day=12;
        month=3;
        year=1993;
    }
    //creating parameterized constructor to initialise variables with given arguments
    data(int day,int month,int year){
        this->day=day;
        this->month=month;
        this->year=year;
    }
//creating a copy constructor that copies the values of the argument object passed
    data(data &obj){
        day=obj.day;
        month=obj.month;
        year=obj.year;
    }  
//functioon for displaying the date
    void display(){
        cout<<"date is "<<day<<endl;
        cout<<"month is "<<month<<endl;
        cout<<"year is "<<year<<endl;
    } 
};

int main(){
    data d1;//creating object with default constructor
    data d2(12,10,2000);//creating object with parameterized constructor
    data d3(d1);//creating copy constructor that copies d1
    data d4(d2);//creating copy constructor that copies d2
   //displaying all objects' dates
    d1.display();
    d2.display();
    d3.display();
    d4.display();
}
