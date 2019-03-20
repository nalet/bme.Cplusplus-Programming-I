#ifndef BOOK_H
#define BOOK_H
#include <iostream>

using namespace std;

class Book
{
private:
    std::string m_title, m_author, m_isbn;
public:
    Book(std::string title, std::string author, std::string isbn) : m_title(title), m_author(author), m_isbn(isbn)
    {

    }
    bool isValid();
    friend ostream& operator<<(ostream& os, const Book& book);
};

#endif // BOOK_H
