#include <array>
#include <iostream>
#include <string>
#include <cstddef>

#ifndef STACK_H
#define STACK_H

template<typename T, std::size_t size>
class StackBase
{
protected:
    std::array<T,size> stack;
    std::size_t m_top{0};
public:
    StackBase<T,size>() {}
    ~StackBase<T,size>() {}

    void push(T element)
    {
        if(this->m_top == size) {
            std::cout << "Stack is full." << std::endl;
            return;
        }
        std::cout << "Add to stack: " << element << std::endl;
        this->stack[this->m_top++] = element;
    }

    T pop()
    {
        if(this->m_top == 0) {
            std::cout << "Stack size is 0" << std::endl;
            return 0;
        }
        T element = this->stack[this->m_top-1];
        this->stack[--this->m_top] = 0;
        std::cout << "Pop from stack: " << element << std::endl;
        return element;
    }

    T peek()
    {
        std::cout << "Peek from stack: " << this->stack[this->m_top-1] << std::endl;
        return this->stack[this->m_top-1];
    }

    void print() {
        for (std::size_t i = 0; i < size; ++i) {
            std::cout << "Stack on Pos " << i << ": " << this->stack[i] << std::endl;
        }
    }
};


template<typename T, std::size_t size>
class Stack : public StackBase<T,size>
{

};

template<std::size_t size>
class Stack<std::string, size> : public StackBase<std::string,size>
{
public:
    std::string pop()
    {
        if(this->m_top == 0) {
            std::cout << "Stack size is 0" << std::endl;
            return "";
        }
        std::string element = StackBase<std::string,size>::stack[StackBase<std::string,size>::m_top-1];
        StackBase<std::string,size>::stack[--StackBase<std::string,size>::m_top] = "";
        std::cout << "Pop from stack: " << element << std::endl;
        return element;
    }
};

#endif // STACK_H
