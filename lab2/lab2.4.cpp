#include<iostream>
#include<string.h>

using namespace std;

class student{
    int admno;
    string name;
    float eng;
    float mat;
    float sci;
    float total;
    
     inline float compute(int eng,int mat,int sci){
        return eng + mat + sci;
    }

    public:
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
    
    void showData();
};

void student :: showData(){
        cout<<"your name is "<<name<<endl;
        cout<<"your admission no is "<<admno<<endl;
        cout<<"your eng marks are "<<eng<<endl;
        cout<<"your mat marks are "<<mat<<endl;
        cout<<"your sci marks are "<<name<<endl;
        cout<<"your total marks are "<<total<<endl;
    }

int main(){
    student sarath;
    sarath.readData();
    sarath.showData();
}