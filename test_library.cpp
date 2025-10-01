#include <iostream>
#include "Library.h"
using namespace std;

int main() {
    cout << "Testing Library Class...\n";

    Library lib;
    lib.addBook(Book(1, "C++ Basics", "George"));
    lib.addBook(Book(2, "OOP in C++", "Wainaina"));

    lib.addUser(User(90, "Kennedy"));
    lib.addUser(User(200, "Jane"));

    // Positive: borrowing an available book
    cout << "Borrow by Kennedy (book 1): "
         << (lib.borrowBook(90, 1) ? "Pass" : "Fail") << endl;

    // Negative: borrowing the same book by another user
    cout << "Borrow same book by Jane: "
         << (!lib.borrowBook(200, 1) ? "Pass" : "Fail") << endl;

    // Positive: returning of the book by Kennedy
    cout << "Return by Kennedy (book 1): "
         << (lib.returnBook(90, 1) ? "Pass" : "Fail") << endl;

    // Positive: Jane borrows after the book is returned
    cout << "Borrow by Jane after return: "
         << (lib.borrowBook(200, 1) ? "Pass" : "Fail") << endl;

    // Negative: return book not borrowed by Kennedy
    cout << "Return by Kennedy (book 2, not borrowed): "
         << (!lib.returnBook(90, 2) ? "Pass" : "Fail") << endl;

    return 0;
}
