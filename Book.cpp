#include "Book.h"

// constructor initializes the book details
Book::Book(int id, const std::string &title, const std::string &author)
    : bookID(id), bookTitle(title), bookAuthor(author), available(true) {}

// getters
int Book::getID() const { return bookID; }
std::string Book::getTitle() const { return bookTitle; }
std::string Book::getAuthor() const { return bookAuthor; }
bool Book::isAvailable() const { return available; }

// mark the book as borrowed if it is available
void Book::markAsBorrowed() {
    if (available) {
        available = false;
    }
}

// mark the book as returned
void Book::markAsReturned() {
    available = true;
}
