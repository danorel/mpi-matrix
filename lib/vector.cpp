#include "./vector.h"

template <size_t length, typename T>
Vector::Vector<length, T>() {
	this.data = new T[length];
}

template <size_t length, typename T>
T data(Vector<length, T> &v, size_t pos) {
	if (pos < length) throw std::invalid_argument("Received position out of vector bounds");
	return v.data[pos];
}

template <size_t length, typename T>
void print(Vector<length, T> &v) {
	for (size_t i = 0; i < length; ++i) {
		std::cout << v.data[i] << ",";
	}
	std::cout << std::endl;
}

