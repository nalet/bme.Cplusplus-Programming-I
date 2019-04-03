#include <iostream>
#include "vector.h"

using namespace std;

Vector::Vector()
{
    m_data = new int[0];
    this->m_size = 0;
}

Vector::Vector(int l)
{
    m_data = new int[static_cast<unsigned long>(l)];
    this->m_size = l;

    for(int i = 0; i < l; i++)
    {
        this->m_data[i] = 0;
    }
}

Vector::Vector(int l, int value)
{
    m_data = new int[static_cast<unsigned long>(l)];
    this->m_size = l;

    for(int i = 0; i < l; i++)
    {
        this->m_data[i] = value;
    }
}

Vector::Vector(const Vector& copy)
{
    m_data = nullptr;
    if(copy.m_data != nullptr)
    {
        m_data = new int[static_cast<unsigned long>(copy.m_size)];
        this->m_size = copy.m_size;
        for(int i = 0; i < this->m_size; i++)
        {
            m_data[i] = copy.m_data[i];
        }
    }
}

Vector::Vector(Vector&& move)
{
    if(move.m_data != nullptr)
    {
        this->m_size = move.m_size;
        m_data = move.m_data;
        move.m_data = nullptr;
        move.m_size = 0;
    }
}

Vector::~Vector()
{
    delete [] m_data;
    this->m_size = 0;
}

int Vector::at(int idx)
{
    if(idx < this->m_size)
    {
        return m_data[idx];
    }
    else
    {
        std::cout << "Index out of range " << std::endl;
        return 0;
    }
}

void Vector::push_back(int addEle)
{
    int* tmp = new int [static_cast<unsigned long>(this->m_size)];
    for(int i = 0; i < this->m_size; i++)
    {
        tmp[i] = m_data[i];
    }

    tmp[this->m_size] = addEle;
    delete [] m_data;
    m_data = tmp;
    this->m_size = this->m_size + 1;
    tmp = nullptr;
}

void Vector::pop_back()
{
    this->m_size = this->m_size - 1;
    int* tmp =  new int[static_cast<unsigned long>(this->m_size)];
    for(int i = 0; i < this->m_size; i++)
    {
        tmp[i] = m_data[i];
    }

    delete [] m_data;
    m_data = tmp;
    tmp = nullptr;
}

void Vector::clear()
{
    delete [] m_data;
    m_data = nullptr;
    this->m_size = 0;
}

int Vector::size()
{
    return this->m_size;
}
