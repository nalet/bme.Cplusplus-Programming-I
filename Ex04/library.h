#ifndef LIBRARY_H
#define LIBRARY_H
#include "book.h"
#include <vector>
class Library
{
private:
    std::vector<Book> lib;
public:
    Library();
    void addBook(Book book);
    void printInventary();
    void cleanup();
};

#endif // LIBRARY_H
