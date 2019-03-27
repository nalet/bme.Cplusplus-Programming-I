#ifndef LIBRARY_H
#define LIBRARY_H
#include "book.h"
#include <vector>
class Library
{
private:
    std::vector<Book> lib;
    vector<Book>::iterator deleteBook(vector<Book>::iterator it);
public:
    Library();
    void addBook(Book book);
    void printInventory();
    void cleanup();
};

#endif // LIBRARY_H
