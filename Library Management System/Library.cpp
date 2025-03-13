// Library.cpp
#include "Library.h"
#include <iostream>

void Library::addBook(Book* book) {
    books.push_back(book);
    cout << "Added book: " << book->getTitle() << endl;
}

void Library::removeBook(const string& title) {
    books.erase(remove_if(books.begin(), books.end(),
                          [&title](Book* book) { return book->getTitle() == title; }),
                books.end());
    cout << "Removed book: " << title << endl;
}

void Library::addMember(Member* member) {
    members.push_back(member);
    cout << "Added member: " << member->getName() << endl;
}

void Library::borrowBook(const string& bookTitle, int memberID) {
    Book* book = nullptr;
    for (auto& b : books) {
        if (b->getTitle() == bookTitle) {
            book = b;
            break;
        }
    }

    if (!book) {
        cout << "Book not found!" << endl;
        return;
    }

    for (auto& m : members) {
        if (m->getID() == memberID) {
            m->borrowBook(book);
            return;
        }
    }

    cout << "Member not found!" << endl;
}

void Library::returnBook(const string& bookTitle, int memberID) {
    for (auto& m : members) {
        if (m->getID() == memberID) {
            for (auto& b : books) {
                if (b->getTitle() == bookTitle) {
                    m->returnBook(b);
                    return;
                }
            }
        }
    }

    cout << "Book or Member not found!" << endl;
}

void Library::viewBooks() const {
    cout << "Library Books:" << endl;
    for (const auto& book : books) {
        book->displayInfo();
    }
}

void Library::viewMembers() const {
    cout << "Library Members:" << endl;
    for (const auto& member : members) {
        cout << "Name: " << member->getName() << ", ID: " << member->getID() << endl;
    }
}

Library::~Library() {
    for (auto& book : books)
        delete book;
    for (auto& member : members)
        delete member;
}
