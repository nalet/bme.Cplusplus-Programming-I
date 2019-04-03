#ifndef VECTOR_H
#define VECTOR_H


class Vector
{
private:
    int m_size;
    int* m_data;
public:
    Vector();
    Vector(int l);
    Vector(int l, int value);

    Vector(const Vector& copy);
    Vector(Vector&& move);
    ~Vector();

    int size();
    int at(int idx);
    void push_back(int addElem);
    void pop_back();
    void clear();
};

#endif // VECTOR_H
