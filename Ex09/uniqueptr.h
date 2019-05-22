#include <iostream>

#ifndef UNIQUEPTR_H
#define UNIQUEPTR_H

template<class T1>
class UniquePtr
{
protected:
    T1 *mPtr;
public:
    UniquePtr(T1 *ptr= nullptr):mPtr(ptr){}
    ~UniquePtr()
    {
        delete mPtr;
    }

    UniquePtr(const UniquePtr &copy_ptr) = delete;
    UniquePtr(UniquePtr &&move_ptr)
    {
        if (move_ptr.mPtr == nullptr)
        {
            std::cout << "Pointer is empty."<<std::endl;
            return;
        }
        mPtr = move_ptr.mPtr;
        move_ptr.mPtr = nullptr;
    }

    T1& operator* ()
    {
        return *mPtr;
    }

    T1* operator-> ()
    {
        return mPtr;
    }

    void operator= (UniquePtr &move_ptrp) = delete;
    T1& operator= ( UniquePtr &&move_ptr)
    {
        // check if possible ptr is null...
                if (move_ptr.mPtr != nullptr)
                {
                      mPtr = move_ptr.mPtr;
                      // set old pointer to null ptr
                     move_ptr.mPtr = nullptr;
                }
                else
                {
                    std::cout<<"no move today..."<<std::endl;
                }

                return *this->mPtr;
    }
};

template<class T1>
class UniquePtr<T1[]>
{
protected:
    T1 *mPtr;
public:
    UniquePtr(T1 *ptr= nullptr):mPtr(ptr){}
    ~UniquePtr()
    {
        delete[] mPtr;
    }

    UniquePtr(const UniquePtr &copy_ptr) = delete;
    UniquePtr(UniquePtr &&move_ptr)
    {
        if (move_ptr.mPtr == nullptr)
        {
            std::cout << "Pointer is empty."<<std::endl;
            return;
        }
        mPtr = move_ptr.mPtr;
        move_ptr.mPtr = nullptr;
    }

    T1& operator* ()
    {
        return *mPtr;
    }

    T1* operator-> ()
    {
        return mPtr;
    }

    void operator= (UniquePtr &move_ptrp) = delete;
    T1& operator= ( UniquePtr &&move_ptr)
    {
        // check if possible ptr is null...
                if (move_ptr.mPtr != nullptr)
                {
                      mPtr = move_ptr.mPtr;
                      // set old pointer to null ptr
                     move_ptr.mPtr = nullptr;
                }
                else
                {
                    std::cout<<"no move today..."<<std::endl;
                }

                return *this->mPtr;
    }
};

#endif // UNIQUEPTR_H
