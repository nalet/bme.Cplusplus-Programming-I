#ifndef EX2_3_H
#define EX2_3_H
#include <iostream>

namespace ex2_3
{
    class A
    {
    public:
        A()
        {
            std::cout << "A()" << std::endl;
        }
        ~A()
        {
            std::cout << "~A()" << std::endl;
        }
    };

    class B
    {
    public:
        B()
        {
            std::cout << "B()" << std::endl;
        }
        ~B()
        {
            std::cout << "~B()" << std::endl;
        }
    };

    class C
    {
    public:
        C()
        {
            std::cout << "C()" << std::endl;
        }
        ~C()
        {
            std::cout << "~C()" << std::endl;
        }
    };


    class ABC : public A, public C, public B
    {
    public:
        ABC(): A(), C(), B()
        {
            std::cout << "ABC()" << std::endl;
        }
        ~ABC()
        {
            std::cout << "~ABC()" << std::endl;
        }
    };

    void test();
}

#endif // EX2_3_H
