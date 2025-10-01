#ifndef LIBRARY_H
#define LIBRARY_H

#include <vector>
#include <string>
#include "Book.h"
#include "User.h"

class Library {
private:
    std::vector<Book> books;
    std::vector<User> users;

public:
    // book management
    void addBook(const Book &book);
    void removeBook(int bookID);
    Book* searchBookByTitle(const std::string &title);

    // user management
    void addUser(const User &user);
    User* getUserByID(int userID);

    // borrowing or returning of books
    bool borrowBook(int userID, int bookID);
    bool returnBook(int userID, int bookID);

    // for testing the system 
    const std::vector<Book>& getAllBooks() const;
    const std::vector<User>& getAllUsers() const;
};

#endif
