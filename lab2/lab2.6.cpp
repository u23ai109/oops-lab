#include<iostream>
using namespace std;

//creating a class with integer and integer array as members
class mark{
    int size;
    int arr[];
    

    public:
//creating constructor which creates an array of size s and takes input
     mark(int s){
        size=s;
        arr[s];
        cout<<"enter marks"<<endl;
        for(int i=0;i<s;i++){
            cin>>arr[i];
        }
     }

//function to obtain highest marks among the submitted marks
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
    mark class1(5);//creating object and passing the size of object
    class1.highestMarks();//obtaining highest marks

    return 0;
}
