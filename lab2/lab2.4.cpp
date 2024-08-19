#include<iostream>
#include<string.h>

using namespace std;

//creating class with given variables
class student{
    int admno;
    string name;
    float eng;
    float mat;
    float sci;
    float total;

//inline function that returns the sum of all subjects
     inline float compute(int eng,int mat,int sci){
        return eng + mat + sci;
    }

    public:
//function to input all subjects' marks ,calculate and display total marks
    void readData(){
        cout<<"enter admission no "<<endl;
        cin>>admno;
        cout<<"enter name "<<endl;
        cin>>name;
        cout<<"enter eng marks "<<endl;
        cin>>eng;
        cout<<"enter mat marks "<<endl;
        cin>>mat;
        cout<<"enter sci marks "<<endl;
        cin>>sci;
        total=compute(eng,mat,sci);
        cout<<"total marks are "<<total<<endl;

    }
   //declaring a function inside class 
    void showData();
};

//defining declared function using scope resolution operator
void student :: showData(){
        cout<<"your name is "<<name<<endl;
        cout<<"your admission no is "<<admno<<endl;
        cout<<"your eng marks are "<<eng<<endl;
        cout<<"your mat marks are "<<mat<<endl;
        cout<<"your sci marks are "<<name<<endl;
        cout<<"your total marks are "<<total<<endl;
    }

int main(){
    student sarath; //creating object
    //calling member function of object
    sarath.readData();
    sarath.showData();
}
