#include <iostream>
#include<cmath>
using namespace std;

class cuboid
{
    float l, b, h;

public:
    void set()
    {
        cout << "enter length,breadth,height of cuboid" << endl;
        cin >> l >> b >> h;
    }
    void volume()
    {
        cout<<"the volume of cuboid is "<<l*b*h<<endl;
    }

    friend inline float cube(cuboid &c);
};

inline float cube(cuboid &c){
    return cbrt(c.l*c.b*c.h);
}

int main(){
    cuboid q;
    q.set();
    q.volume();
    cout<<"volume of cube is "<<cube(q);
}