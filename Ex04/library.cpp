#include <iostream>
#include "library.h"
#include "book.h"

using namespace std;

Library::Library()
{

}
void Library::addBook(Book book)
{
    this->lib.push_back(book);
    std::cout << "Add: " << book << std::endl;
}
void Library::printInventory()
{
    std::cout << "Inventory:" << std::endl;
    for(auto b : this->lib) std::cout << b << std::endl;
}
void Library::cleanup()
{
    std::cout << "cleanup Inventory" << std::endl;
    for (vector<Book>::iterator it = begin(this->lib); it != end(this->lib);)
    {
        if (!it->isValid())
            it = this->deleteBook(it);
        else
            ++it;
    }
}

vector<Book>::iterator Library::deleteBook(vector<Book>::iterator it)
{
    std::cout << "Removing: " << static_cast<Book>(*it) << std::endl;
    return this->lib.erase(it);
}
