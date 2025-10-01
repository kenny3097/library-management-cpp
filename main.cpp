#include <iostream>
#include "Library.h"
using namespace std;

int main() {
    Library lib;

    // add books
    lib.addBook(Book(90, "C++ Basics", "George"));
    lib.addBook(Book(200, "OOP in Depth", "Wainaina"));

    // add users
    lib.addUser(User(1, "Kennedy"));
    lib.addUser(User(2, "Jane"));

    // borrow a book
    if (lib.borrowBook(1, 90)) {
        cout << "Kennedy borrowed 'C++ Basics'\n";
    } else {
        cout << "Borrow failed\n";
    }

    // try to borrow the same book again (should fail)
    if (lib.borrowBook(2, 90)) {
        cout << "Jane borrowed 'C++ Basics'\n";
    } else {
        cout << "Borrow failed for Jane\n";
    }

    // return the book
    if (lib.returnBook(1, 90)) {
        cout << "Kennedy returned 'C++ Basics'\n";
    }

    // Jane tries again after return
    if (lib.borrowBook(2, 90)) {
        cout << "Jane borrowed 'C++ Basics' after return\n";
    }

    return 0;
}

