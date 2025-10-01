#include <iostream>
#include "Book.h"
using namespace std;

int main() {
    cout << "Testing Book Class...\n";

    Book b(1, "C++ Basics", "George Wainaina");

    // Positive: initial availability
    cout << "Is it Initially available? " << (b.isAvailable() ? "Pass" : "Fail") << endl;

    // Positive: borrowing the book
    b.markAsBorrowed();
    cout << "After borrowing, is it available? " << (!b.isAvailable() ? "Pass" : "Fail") << endl;

    // Positive: returning the  book
    b.markAsReturned();
    cout << "After returning,is it available? " << (b.isAvailable() ? "Pass" : "Fail") << endl;

    // Negative: borrowing twice
    b.markAsBorrowed();
    b.markAsBorrowed(); // this should not change its availability
    cout << "Is Borrowing twice handled? " << (!b.isAvailable() ? "Pass" : "Fail") << endl;

    return 0;
}
