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
void Library::printInventary()
{
    std::cout << "Inventory:" << std::endl;
    for(auto b : this->lib) std::cout << b << std::endl;
}
void Library::cleanup()
{
    std::cout << "cleanup Inventory" << std::endl;
    for (auto it = begin(this->lib); it != end(this->lib);)
    {
        if (!it->isValid())
            it = this->lib.erase(it);
        else
            ++it;
    }
}
