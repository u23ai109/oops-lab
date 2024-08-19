#include<iostream>
#include<string.h>
using namespace std;

// Define a 'book' class to represent a book with a name and cost
class book {
    string name; // Name of the book
    int cost;    // Cost of the book

    public:
     // Constructor to initialize the book's name and cost
     book(string name, int cost) {
        this->name = name;
        this->cost = cost;
     }

     // Friend function declaration to allow comparison of two book objects
     friend void compare(book &obj1, book &obj2);
};

// Friend function definition to compare the cost of two books
void compare(book &obj1, book &obj2) {
    // Compare the cost of the two books and print the one that is cheaper
    if (obj1.cost > obj2.cost) {
        cout << obj2.name << " is cheaper" << endl;
    } else {
        cout << obj1.name << " is cheaper" << endl;
    }
}

int main() {
    // Create two book objects with names and costs
    book b1("harry_potter", 7000);
    book b2("The_Boys", 9000);

    // Compare the two books using the friend function
    compare(b1, b2);

    return 0;
}
