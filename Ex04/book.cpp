#include "book.h"
#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

bool Book::isValid() {
    std::string isbn = this->m_isbn;
    isbn.erase(std::remove(isbn.begin(), isbn.end(), '-' ), isbn.end());
    int i = std::stoi(isbn.substr(2,1));
    int check = (1*isbn[0] + 2*isbn[1] + 3*isbn[2] + 4*isbn[3] + 5*isbn[4] + 6*isbn[5] + 7*isbn[6] + 8*isbn[7] + 8*isbn[8]) % 11;
    return i == check;
}
ostream& operator<<(ostream& os, const Book& book)
{
    os << book.m_title << '/' << book.m_author << '/' << book.m_title;
    return os;
}
