#ifndef USER_H
#define USER_H

#include <string>
#include <vector>

class User {
private:
    int userID;
    std::string userName;
    std::vector<int> borrowedBooks;  // stores the  books in their respective IDs

public:
    // constructor
    User(int id, const std::string &name);

    // accessors
    int getID() const;
    std::string getName() const;

    // handles borrowing operations for the books
    void borrowBook(int bookID);
    void returnBook(int bookID);
    const std::vector<int>& getBorrowedBooks() const;

     // check if user has borrowed a given book
    bool hasBorrowed(int bookID) const;
};

#endif
