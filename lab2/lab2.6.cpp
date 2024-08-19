#include<iostream>
using namespace std;

class mark{
    int size;
    int arr[];
    

    public:
     mark(int s){
        size=s;
        arr[s];
        cout<<"enter marks"<<endl;
        for(int i=0;i<s;i++){
            cin>>arr[i];
        }
     }

     void highestMarks(){

           int l=arr[0];

           for(int i=0;i<size;i++){
            if (arr[i]>l){
                l=arr[i];
            }
           }
        cout<<"highest marks are "<<l<<endl;
     }
};

int main(){
    mark class1(5);
    class1.highestMarks();

    return 0;
}