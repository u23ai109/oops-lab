#include<iostream>
using namespace std;

class complex{
    int real;
    int imag;

    public:
    void setComplex(){
        cout<<"real & imaginary part of complex no is"<<endl;
        cin>>real>>imag;
    }
     void multiply(complex &c);
};

void complex :: multiply(complex &c){
    complex c3;
    c3.real=(this->real * c.real) - (this->imag * c.imag);
    c3.imag=(this->real * c.imag) + (this->imag * c.real);
    cout<<"the result is "<<c3.real <<" + ("<< c3.imag<<")i"<<endl;
}

int main(){
    complex c1;
    c1.setComplex();
    complex c2;
    c2.setComplex();

    c1.multiply(c2);

    return 0;
}