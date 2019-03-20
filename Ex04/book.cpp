#include "book.h"
#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

bool Book::isValid() {
    if(this->m_isbn.size() != 10) return false;
    std::string isbn = this->m_isbn;
    isbn.erase(std::remove(isbn.begin(), isbn.end(), '-' ), isbn.end());
    int i = std::stoi(isbn.substr(9,1));
    int check = (1*std::stoi(isbn.substr(0,1)) +
                 2*std::stoi(isbn.substr(1,1)) +
                 3*std::stoi(isbn.substr(2,1)) +
                 4*std::stoi(isbn.substr(3,1)) +
                 5*std::stoi(isbn.substr(4,1)) +
                 6*std::stoi(isbn.substr(5,1)) +
                 7*std::stoi(isbn.substr(6,1)) +
                 8*std::stoi(isbn.substr(7,1)) +
                 9*std::stoi(isbn.substr(8,1))) % 11;
    return i == check;
}
ostream& operator<<(ostream& os, const Book& book)
{
    os << "Book(title=\"" <<book.m_title << "\", author=\"" << book.m_author << "\", isbn=\"" << book.m_isbn << "\")";
    return os;
}
