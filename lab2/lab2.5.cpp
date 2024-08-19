#include<iostream>
using namespace std;
//creaating class with required variables
class fraction{
    int numerator;
    int denominator;

   public:
//creating a constructor to initialise class variables
   fraction(int num,int den){
    numerator=num;
    denominator=den;
   }
//function to add two fractions which takes object as argument
    void add(fraction f){
        int a=(numerator*f.denominator)+(denominator*f.numerator);
        int b=(denominator*f.denominator);
        cout<<a<<"/"<<b<<endl;
    }
//function to subtract two fractions using call by reference which takes object as argument 
    void subtract(fraction &f){
        int a=(numerator*f.denominator)-(denominator*f.numerator);
        int b=(denominator*f.denominator);
        cout<<a<<"/"<<b<<endl;
    }
//function to multiply two fractions using pointers which takes address of another object
    void multiply(fraction * f){
        int a=(numerator*f->denominator)+(denominator*f->numerator);
        int b=(denominator*f->denominator);
        cout<<a<<"/"<<b<<endl;
    }
};

int main(){
    fraction f1(3,4),f2(5,7);// creatin two objects(fractions)
    f1.add(f2);//adding fractions using add function by passing f2 as argument
    f1.subtract(f2);//subtracting fractions using subtract function by passing f2 as argument
    f1.multiply(&f2);//multiplying fractions using multiply function by passing adsress of f2 as argument
}
