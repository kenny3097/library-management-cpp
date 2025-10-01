# Online Library Management System (C++)

## 1. Overview
This project implements a simple **Online Library Management System** using **Object-Oriented Programming (OOP)** in **C++**.  
It contains three main entities:
- **Book** – represents  a single book in the library.
- **User** – represents a library member user eg a student who can borrow and return books.
- **Library** – represents the library as a whole-it stores all the books and handles user operations.

The project also includes separate **test programs** for each class to confirm that all core functionalities work as intended.

---

## 2. Design Choices

### Object-Oriented Principles
- **Encapsulation:**  
  Each class stores its own data as private members and exposes only the necessary public methods for interaction purposes.
  
- **Separation of Concerns:**  
  - `Book` handles information about individual books (its title, the author, availability).  
  - `User` manages the list of borrowed books for each user.  
  - `Library` coordinates borrowing, returning, and keeping track of all the books + users.

- **Modularity and Reusability:**  
  By keeping each class focused on a single responsibility, the system is easy to maintain and extend (e.g., adding search by title or author in the future).

---

## 3. Project Structure
Book.h / Book.cpp --> Book class
User.h / User.cpp --> User class
Library.h / Library.cpp --> Library class
test_book.cpp --> test program for the Book class
test_user.cpp --> test program for the User class
test_library.cpp --> test program for the Library class


---

## 4. Instructions for Compiling and Running Tests
Make sure you are inside the project folder in your terminal.

### Compile and run the **Book** tests:
```bash
g++ test_book.cpp Book.cpp -o test_book.exe
.\test_book.exe

Compile and run the User tests:

g++ test_user.cpp User.cpp -o test_user.exe
.\test_user.exe


Compile and run the Library tests:

g++ test_library.cpp Library.cpp User.cpp Book.cpp -o test_library.exe
.\test_library.exe

When executed, each test program will print messages indicating whether the tested operations passed successfully.
The focus of this project was on building and testing core classes.

Each class was tested individually to confirm their accuracy before I integrating them.

Confirming the test worked;

C:\Users\kenny\Desktop\Zetech University Notes\YEAR 1 SEM 2\OBJECT ORIENTED PROGRAMMING 1\LibraryManagement>.\test_book.exe
Testing Book Class...
Is it Initially available? Pass
After borrowing, is it available? Pass
After returning,is it available? Pass
Is Borrowing twice handled? Pass


C:\Users\kenny\Desktop\Zetech University Notes\YEAR 1 SEM 2\OBJECT ORIENTED PROGRAMMING 1\LibraryManagement>.\test_user.exe
Testing User Class...
Initially borrowed count: 0
Borrowed books count after 2 borrows: 2
Borrowed books count after return: 1
Handled returning non-borrowed book? (count still 1)


C:\Users\kenny\Desktop\Zetech University Notes\YEAR 1 SEM 2\OBJECT ORIENTED PROGRAMMING 1\LibraryManagement>.\test_library.exe
Testing Library Class...
Borrow by Kennedy (book 1): Pass
Borrow same book by Jane: Pass
Return by Kennedy (book 1): Pass
Borrow by Jane after return: Pass
Return by Kennedy (book 2, not borrowed): Pass





