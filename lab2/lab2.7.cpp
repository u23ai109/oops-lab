#include<iostream>
using namespace std;

//creating an class with a pointer and int as members
class arra{
    int * arr;
    int size;

    public:
//creating a default constructor that initialises size and arr as null
     arra(){
        arr=NULL;
        size=0;
     }
// creating a parameterized constructor 
     arra(int s){
        size=s;
        arr=new int[size];//updating the pointer to array using 'new'
        cout<<"enter elements of array"<<endl;

        for(int i=0;i<size;i++){
            cin>>arr[i];//taking input into array
        }
     }
//function to obtain largest element among elements of array
     int large(){
         int l=arr[0];
        for(int i=0;i<size;i++){
            if(arr[i]>l){
                l=arr[i];
            }
        }
        return l;
     }
};

int main(){
    arra a(5);//creating object that takes an argument 
    cout<<"largest element is "<<a.large()<<endl;//displaying largest element

    return 0;
}
