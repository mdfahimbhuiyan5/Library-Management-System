#ifndef MEMBER_H
#define MEMBER_H

#include <string>
#include <vector>
#include "Book.h"

using namespace std;

class Member {
private:
    string name;
    int memberID;
    vector<Book*> borrowedBooks;

public:
    Member(const string& name, int id);
    void borrowBook(Book* book);
    void returnBook(Book* book);
    void viewBorrowedBooks() const;
    string getName() const;
    int getID() const;
};

#endif
