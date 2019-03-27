#ifndef BOOK_H
#define BOOK_H
#include <iostream>

using namespace std;

class Book
{
private:
    std::string m_title, m_author, m_isbn;
    bool m_isValid = false;
    bool isInputValid();
    bool isISBNValid();
public:
    Book(std::string title, std::string author, std::string isbn) : m_title(title), m_author(author), m_isbn(isbn)
    {
        this->m_isValid = this->isInputValid() && this->isISBNValid();
    }
    bool isValid();
    friend ostream& operator<<(ostream& os, const Book& book);
};

#endif // BOOK_H
