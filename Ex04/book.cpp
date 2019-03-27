#include "book.h"
#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

bool Book::isValid() {
    this->m_isValid = this->isInputValid() && this->isISBNValid();
    return this->m_isValid;
}
bool Book::isInputValid()
{
    return !this->m_isbn.empty() && !this->m_title.empty() && !this->m_author.empty();
}
bool Book::isISBNValid()
{
    std::string isbn = this->m_isbn;
    isbn.erase(std::remove(isbn.begin(), isbn.end(), '-' ), isbn.end());
    if(isbn.size() != 10) return false;
    int modsum{0};
    for(unsigned long i = 0;i<10;i++) modsum += std::stoi(isbn.substr(i,1)) * (static_cast<int>(i)+1);
    return modsum % 11 == 0;
}
ostream& operator<<(ostream& os, const Book& book)
{
    os << "Book(title=\"" <<book.m_title << "\", author=\"" << book.m_author << "\", isbn=\"" << book.m_isbn << "\", validityStatus=\"" << book.m_isValid << "\")";
    return os;
}
