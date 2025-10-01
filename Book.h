#ifndef BOOK_H
#define BOOK_H

#include <string>   // for using std::string

class Book {
private:
    int bookID;             // unique identifier for each book
    std::string bookTitle;
    std::string bookAuthor;
    bool available;         // true if book can be borrowed

public:
    // constructor
    Book(int id, const std::string &title, const std::string &author);

    // accessors (getters)
    int getID() const;
    std::string getTitle() const;
    std::string getAuthor() const;
    bool isAvailable() const;

    // actions
    void markAsBorrowed();
    void markAsReturned();
};

#endif

