#include "Library.h"
#include <algorithm>

// adding a new book
void Library::addBook(const Book &book) {
    books.push_back(book);
}

// removing a book by its ID
void Library::removeBook(int bookID) {
    books.erase(
        std::remove_if(books.begin(), books.end(),
                       [bookID](const Book &b) { return b.getID() == bookID; }),
        books.end());
}

// finding a book by its respective title
Book* Library::searchBookByTitle(const std::string &title) {
    for (auto &book : books) {
        if (book.getTitle() == title) {
            return &book;
        }
    }
    return nullptr;
}

// adding a new user
void Library::addUser(const User &user) {
    users.push_back(user);
}

// finding a user by ID
User* Library::getUserByID(int userID) {
    for (auto &u : users) {
        if (u.getID() == userID) {
            return &u;
        }
    }
    return nullptr;
}

// borrowing a book
bool Library::borrowBook(int userID, int bookID) {
    User* user = getUserByID(userID);
    if (!user) return false;

    for (auto &book : books) {
        if (book.getID() == bookID && book.isAvailable()) {
            book.markAsBorrowed();
            user->borrowBook(bookID);
            return true;
        }
    }
    return false;
}

// returning a book
bool Library::returnBook(int userID, int bookID) {
    User* user = getUserByID(userID);
    if (!user) return false;

       // Ensure the user actually borrowed the book
    if (!user->hasBorrowed(bookID)) {
        return false; // cannot return  a book that you never borrowed
    }

    for (auto &book : books) {
        if (book.getID() == bookID) {
            book.markAsReturned();
            user->returnBook(bookID);
            return true;
        }
    }
    return false;
}

// for testing purposes
const std::vector<Book>& Library::getAllBooks() const { return books; }
const std::vector<User>& Library::getAllUsers() const { return users; }
