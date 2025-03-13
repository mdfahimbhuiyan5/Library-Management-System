// Library.h
#ifndef LIBRARY_H
#define LIBRARY_H

#include <vector>
#include "Book.h"
#include "Member.h"

class Library {
private:
    vector<Book*> books;
    vector<Member*> members;

public:
    void addBook(Book* book);
    void removeBook(const string& title);
    void addMember(Member* member);
    void borrowBook(const string& bookTitle, int memberID);
    void returnBook(const string& bookTitle, int memberID);
    void viewBooks() const;
    void viewMembers() const;
    ~Library();
};

#endif
