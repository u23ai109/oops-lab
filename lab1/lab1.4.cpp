#include <iostream>
#include <string>
using namespace std;

//creating class pbill
class pbill {
private:
    string name;
    int num_calls;
    float bill_amount;

public:
    // Constructor for declaring attributes
    pbill(string customer, int call) {
        name = customer;
        num_calls = call;
        bill_amount = 0.0;
    }

    // Function for calculating bill amount
    void computeBill(){
        if(num_calls<=100){
            bill_amount=200.0;
        }else if(num_calls<=150){
            bill_amount=200.0+0.60*(num_calls-100);
        }else if(num_calls<=200){
            bill_amount=230+0.5*(num_calls-150);
        }else{
            bill_amount=255+0.4*(num_calls-200);
        }
    }

    // Function for displaying output
    void outputInfo() {
        cout << "Customer " << name << endl;
        cout << "Bill: Rs. " << bill_amount << endl;
    }
};

int main() {
    string name;
    int num_calls;

    // taking input
    cout << "Enter customer name: ";
    getline(cin, name);
    cout << "Enter number of calls: ";
    cin >> num_calls;

    pbill customer_bill(name, num_calls);//creating pbill object(automatically calls constructor)
    customer_bill.computeBill();
    customer_bill.outputInfo();

    return 0;
}