#include "Library.h"
#include "Book.h"

int main() {
    Library library;

    // Add Books
    library.addBook(new Book("1984", "George Orwell", "Fiction"));
    library.addBook(new Book("A Brief History of Time", "Stephen Hawking", "Non-Fiction"));

    // Add Members
    library.addMember(new Member("Alice", 1));
    library.addMember(new Member("Bob", 2));

    // Borrow and Return Books
    library.borrowBook("1984", 1);
    library.borrowBook("1984", 2); // Already borrowed
    library.returnBook("1984", 1);
    library.borrowBook("1984", 2); // Now available

    // View Library State
    library.viewBooks();
    library.viewMembers();

    return 0;
}
