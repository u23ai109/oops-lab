 #include<iostream>
 
 using namespace std;

struct post{
float weight;
float cost;

void costs(){
    if(weight<=50){
        cost=0.05*weight;
    }else if(weight<=150){
        cost=2.5+0.04*(weight-50);
    }else if(weight<=400){
        cost=6.5+0.025*(weight-150);
    }else{
        cost=12.75+0.025*(weight-400);
    }
}

void display(){
cout<<"cost is "<<cost<<endl;
}
};

int main(){
    post p1;
    cout<<"enter weight"<<endl;
    cin>>p1.weight;

    p1.costs();
    p1.display();
}


