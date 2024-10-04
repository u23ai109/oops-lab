#include <iostream>
using namespace std;

class integer {
private:
    int value;

public:

    friend integer operator+( integer& a,  integer& b);


    void display()  {
        cout << "Value: " << value << endl;
    }
};


integer operator+( integer& a,  integer& b) {

    return integer(a.value + b.value);
}

int main() {
    integer a(5), b(6);


    integer result = a + b;


    result.display();

    return 0;
}
