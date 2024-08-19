#include<iostream>
#include<string.h>
using namespace std;
//creating of struct publication and declaring required variables
struct publication
{
    string title;
    float price;
    string author;
};
//deriving new struct book using publications 
struct book : publication{
    int count;//declaring page count
    void getData(){
        //taking the values of title,price,author from user
        cout<<"enter title"<<endl;
        cin>>title;
        cout<<"enter price"<<endl;
        cin>>price;
        cout<<"enter author"<<endl;
        cin>>author;
    }

    void display(){
        //displaying title,price,author on screen
        cout<<"title is "<<title<<endl;
        cout<<"price is "<<price<<endl;
        cout<<"author is "<<author<<endl;

    }
};

//deriving new struct book using publications 
struct ebook : publication{
    int time;//declaring time variable
    void getData(){
        //taking the values of title,price,author from user
        cout<<"enter title"<<endl;
        cin>>title;
        cout<<"enter price"<<endl;
        cin>>price;
        cout<<"enter author"<<endl;
        cin>>author;
    }

    void display(){
        //displaying title,price,author on screen
        cout<<"title is "<<title<<endl;
        cout<<"price is "<<price<<endl;
        cout<<"author is "<<author<<endl;

    }
};

int main(){
    book b1;//creating object of struct book
    b1.getData();//calling getdata func to take values of variables
    b1.display();//calling display func to display values on screen

    ebook e1;//creating object of struct ebook
    e1.getData();//calling getdata func to take values of variables
    e1.display();//calling display func to display values on screen
 return 0;
}
