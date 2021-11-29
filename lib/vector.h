#ifndef VECTOR_H
#define VECTOR_H

#include <stdexcept>

template <size_t length, typename T>
struct Vector {
        T* data;
};

template <size_t length, typename T>
T data(Vector<length, T> &v, size_t pos);

template <size_t length, typename T>
void print(Vector<length, T> &v);

#endif
