#include <iostream>
using namespace std;
class c2;
class c1
{
    int i;

public:
    void set(int i)
    {
        this->i = i;
    }

    friend inline int sum(c1 &obj1, c2 &obj2);
};

class c2
{
    int j;

public:
    void set(int j)
    {
        this->j = j;
    }
    friend inline int sum(c1 &obj1, c2 &obj2);
};

inline int sum(c1 &obj1, c2 &obj2)
{
    return (obj1.i + obj2.j);
}

int main()
{
    c1 a;
    c2 b;
    a.set(5);
    b.set(6);

    cout<<"sum is "<<sum(a, b)<<endl;
}
