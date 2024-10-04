#include<iostream>
#include<string.h>
using namespace std;

class publication
{ protected:
    string title;
    float price;
    string author;
};

class book :public publication{

    int pcount;
  public:
    void getData(){

        cout<<"enter title"<<endl;
        cin>>title;
        cout<<"enter price"<<endl;
        cin>>price;
        cout<<"enter author"<<endl;
        cin>>author;
    }

    void display(){

        cout<<"title is "<<title<<endl;
        cout<<"price is "<<price<<endl;
        cout<<"author is "<<author<<endl;

    }
};


class ebook : publication{
    int ptime;
  public:
    void getData(){

        cout<<endl<<"enter title"<<endl;
        cin>>title;
        cout<<"enter price"<<endl;
        cin>>price;
        cout<<"enter author"<<endl;
        cin>>author;
    }

    void display(){

        cout<<endl<<"title is "<<title<<endl;
        cout<<"price is "<<price<<endl;
        cout<<"author is "<<author<<endl;

    }
};

int main(){
    book b1;
    b1.getData();
    b1.display();

    ebook e1;
    e1.getData();
    e1.display();
 return 0;
}
