#include<iostream>
#include<string.h>
using namespace std;

class employee{
    static int emp;
   private:
    int empId;
    string empName;
    int age;

   public:
    employee(){
        emp++;
        empId=emp;
    }

    void setDetails(int i){
        cout<<"enter name and age of "<< i+1 <<" employee" <<endl;
        cin>>empName>>age;
    }

    void getData(){
        cout<<"employee name "<<empName<<endl;
        cout<<"employee id "<<empId<<endl;
        cout<<"employee age "<<age<<endl;
        
    }

    friend void search(employee nexus[],int a);


};

int employee :: emp=0;

void search(employee nexus[],int a){
    int s;
    cout<<"enter employee id"<<endl;
    cin>>s;

    for(int i=0;i<a;i++){
        if(nexus[i].empId==s){
            nexus[i].getData();
            break;
        }else{
            cout<<"checking....."<<endl;
        }
    }
}

int main(){
    employee nexus[5];

    for(int i=0;i<5;i++){
        nexus[i].setDetails(i);
    } 

    search(nexus,5);

    return 0;  
}