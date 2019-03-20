#ifndef LIBRARY_H
#define LIBRARY_H
#include "book.h"

class Library
{
public:
    Library();
    void addBook(Book book);
    void printInventary();
    void cleanup();
};

#endif // LIBRARY_H
