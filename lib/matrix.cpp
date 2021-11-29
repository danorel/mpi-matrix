#include "./matrix.h"

template<size_t length, typename T>
Matrix::Matrix<length, T>() {
	this.data = new Vector[length];
	for (size_t i = 0; i < length; ++i) {
		this.data[i] = new Vector<length, T>();
	}
}



