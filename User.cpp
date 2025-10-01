#include "User.h"
#include <algorithm>   // for std::find

// constructor
User::User(int id, const std::string &name)
    : userID(id), userName(name) {}

// accessors
int User::getID() const { return userID; }
std::string User::getName() const { return userName; }

// add a book ID to borrowedBooks
void User::borrowBook(int bookID) {
    borrowedBooks.push_back(bookID);
}

// erasing a book ID from borrowedBooks if it already exists
void User::returnBook(int bookID) {
    auto it = std::find(borrowedBooks.begin(), borrowedBooks.end(), bookID);
    if (it != borrowedBooks.end()) {
        borrowedBooks.erase(it);
    }
}

// return the vector of borrowed book IDs
const std::vector<int>& User::getBorrowedBooks() const {
    return borrowedBooks;
}

// NEW: check whether the user has borrowed a particular book
bool User::hasBorrowed(int bookID) const {
    return std::find(borrowedBooks.begin(), borrowedBooks.end(), bookID)
           != borrowedBooks.end();
}
