#include<iostream>
using namespace std;

class arra{
    int * arr;
    int size;

    public:
     arra(){
        arr=NULL;
        size=0;
     }

     arra(int s){
        size=s;
        arr=new int[size];
        cout<<"enter elements of array"<<endl;

        for(int i=0;i<size;i++){
            cin>>arr[i];
        }
     }

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
    arra a(5);
    cout<<"largest element is "<<a.large()<<endl;

    return 0;
}