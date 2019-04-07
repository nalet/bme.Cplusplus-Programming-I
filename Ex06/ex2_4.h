#ifndef EX2_4_H
#define EX2_4_H

#include <iostream>

namespace ex2_4
{
    class A
    {
    protected:
        int m_A{0};
    public:
        A()
        {
            std::cout << "A()" << std::endl;
        }
        ~A()
        {
            std::cout << "~A()" << std::endl;
        }
        friend class B;
    };

    class B : private A
    {
    public:
        B() : A()
        {
            std::cout << "B()" << std::endl;
        }
        ~B()
        {
            std::cout << "~B()" << std::endl;
        }
    };

    class C : public B
    {
    public:
        C() : B()
        {
            std::cout << "C()" << std::endl;
        }
        ~C()
        {
            std::cout << "~C()" << std::endl;
        }
    };

    void test();
}



#endif // EX2_4_H
