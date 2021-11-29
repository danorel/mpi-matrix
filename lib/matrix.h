#ifndef MATRIX_H
#define MATRIX_H

#include "./vector.h"

template <size_t length, typename T>
struct Matrix {
	Vector<length, T>* data;
};

template <size_t length, typename T>
Matrix<length, T> multiply(const Matrix<length, T> &a, const Matrix<length, T> &b);

#endif
