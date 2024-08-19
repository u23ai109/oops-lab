#include<iostream>
using namespace std;

class fraction{
    int numerator;
    int denominator;

   public:

   fraction(int num,int den){
    numerator=num;
    denominator=den;
   }

    void add(fraction f){
        int a=(numerator*f.denominator)+(denominator*f.numerator);
        int b=(denominator*f.denominator);
        cout<<a<<"/"<<b<<endl;
    }

    void subtract(fraction &f){
        int a=(numerator*f.denominator)-(denominator*f.numerator);
        int b=(denominator*f.denominator);
        cout<<a<<"/"<<b<<endl;
    }

    void multiply(fraction * f){
        int a=(numerator*f->denominator)+(denominator*f->numerator);
        int b=(denominator*f->denominator);
        cout<<a<<"/"<<b<<endl;
    }
};

int main(){
    fraction f1(3,4),f2(5,7);
    f1.add(f2);
    f1.subtract(f2);
    f1.multiply(&f2);
}