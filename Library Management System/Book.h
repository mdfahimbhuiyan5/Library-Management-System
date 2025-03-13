#ifndef BOOK_H
#define BOOK_H

#include <string>

using namespace std;

class Book {
protected:
    string title;
    string author;
    string genre;
    bool isBorrowed;

public:
    Book(const string& title, const string& author, const string& genre);
    virtual void displayInfo() const;
    bool borrowBook();
    void returnBook();
    bool getBorrowStatus() const;
    string getTitle() const;
    virtual ~Book() = default;
};

#endif
