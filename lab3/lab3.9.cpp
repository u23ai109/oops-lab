#include <iostream>
using namespace std;

class ab
{
    int *a;
    int n;

public:
    ab()
    {
        a = NULL;
        n = 0;
    }

    ab(int n)
    {
        this->n = n;
        a = new int[n];
        for (int i = 0; i < n; i++)
        {
            cout<<"enter "<< i+1 <<" element"<<endl;
            cin>>a[i];
        }
    }

    void display(){
        for (int i = 0; i < n; i++)
        {
            cout<<"enter "<< i+1 <<" element is "<<a[i]<<endl;
        }
    }

    ~ab(){
       delete[] a;
    }
};

int main(){
    ab x();
    ab y(3);
    y.display();

}