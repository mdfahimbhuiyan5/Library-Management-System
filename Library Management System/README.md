# **Library Management System**

This repository contains the implementation of a **Library Management System** written in C++ as part of an Object-Oriented Programming (OOP) project. The system manages books, members, and borrowing operations using OOP principles such as encapsulation, inheritance, and composition.

---

## **Features**

1. **Book Management**:
   - Add and remove books from the library.
   - View details of all books, including title, author, genre, and availability status.

2. **Member Management**:
   - Register new members.
   - View a list of all members and their borrowed books.

3. **Borrowing and Returning Books**:
   - Borrow books for a specific member (if available).
   - Return books and update their availability status.
   - Handle cases where the requested book is not available.

---

## **Key Classes**

### **1. `Book`**
Represents a single book in the library:
- **Attributes**:
  - Title
  - Author
  - Genre
  - Borrowed Status
- **Methods**:
  - `displayInfo()`: Displays book details.
  - `borrowBook()`: Marks the book as borrowed.
  - `returnBook()`: Marks the book as returned.

### **2. `Member`**
Represents a library member:
- **Attributes**:
  - Name
  - Member ID
  - List of Borrowed Books
- **Methods**:
  - `borrowBook(Book*)`: Allows the member to borrow a book.
  - `returnBook(Book*)`: Allows the member to return a book.
  - `viewBorrowedBooks()`: Displays the member's borrowed books.

### **3. `Library`**
Manages the library's books and members:
- **Attributes**:
  - List of Books
  - List of Members
- **Methods**:
  - `addBook(Book*)`: Adds a book to the library.
  - `removeBook(string)`: Removes a book by title.
  - `addMember(Member*)`: Registers a new member.
  - `borrowBook(string, int)`: Allows a member to borrow a book.
  - `returnBook(string, int)`: Allows a member to return a book.
  - `viewBooks()`: Displays all books.
  - `viewMembers()`: Displays all members.

---

## **Folder Structure**

```plaintext
library-management-system/
│
├── Book.cpp         # Implementation of the Book class
├── Book.h           # Header file for the Book class
├── Member.cpp       # Implementation of the Member class
├── Member.h         # Header file for the Member class
├── Library.cpp      # Implementation of the Library class
├── Library.h        # Header file for the Library class
└── main.cpp         # Main file to demonstrate library operation
