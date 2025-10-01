#include <iostream>
#include "User.h"
using namespace std;

int main() {
    cout << "Testing User Class...\n";

    User u(90, "Kennedy");

    // Positive: initial empty borrowed list
    cout << "Initially borrowed count: " << u.getBorrowedBooks().size() << endl;

    // Positive: borrow book
    u.borrowBook(10);
    u.borrowBook(20);
    cout << "Borrowed books count after 2 borrows: " << u.getBorrowedBooks().size() << endl;

    // Positive: return a book
    u.returnBook(10);
    cout << "Borrowed books count after return: " << u.getBorrowedBooks().size() << endl;

    // Negative: return a book that was not initially  borrowed
    u.returnBook(100); // this code should do nothing
    cout << "Handled returning non-borrowed book? (count still " 
         << u.getBorrowedBooks().size() << ")\n";

    return 0;
}
