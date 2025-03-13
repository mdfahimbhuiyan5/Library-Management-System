// Book.cpp
#include "Book.h"
#include <iostream>

Book::Book(const string& title, const string& author, const string& genre)
    : title(title), author(author), genre(genre), isBorrowed(false) {}

void Book::displayInfo() const {
    cout << "Title: " << title << ", Author: " << author
         << ", Genre: " << genre
         << ", Status: " << (isBorrowed ? "Borrowed" : "Available") << endl;
}

bool Book::borrowBook() {
    if (!isBorrowed) {
        isBorrowed = true;
        return true;
    }
    return false;
}

void Book::returnBook() {
    isBorrowed = false;
}

bool Book::getBorrowStatus() const {
    return isBorrowed;
}

string Book::getTitle() const {
    return title;
}

