// Member.cpp
#include "Member.h"
#include <iostream>
#include <algorithm>

Member::Member(const string& name, int id) : name(name), memberID(id) {}

void Member::borrowBook(Book* book) {
    if (book->borrowBook()) {
        borrowedBooks.push_back(book);
        cout << name << " successfully borrowed " << book->getTitle() << endl;
    } else {
        cout << book->getTitle() << " is already borrowed." << endl;
    }
}

void Member::returnBook(Book* book) {
    auto it = find(borrowedBooks.begin(), borrowedBooks.end(), book);
    if (it != borrowedBooks.end()) {
        book->returnBook();
        borrowedBooks.erase(it);
        cout << name << " returned " << book->getTitle() << endl;
    } else {
        cout << book->getTitle() << " is not borrowed by " << name << endl;
    }
}

void Member::viewBorrowedBooks() const {
    cout << "Borrowed Books by " << name << ":" << endl;
    for (const auto& book : borrowedBooks) {
        cout << "- " << book->getTitle() << endl;
    }
}

string Member::getName() const {
    return name;
}

int Member::getID() const {
    return memberID;
}
