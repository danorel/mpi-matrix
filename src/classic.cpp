#include <iostream>
#include </usr/local/include/mpi.h>

#include "../lib/matrix.h"
#include "../lib/vector.h"

int main(int argc, char** argv) {
	const size_t length = 5;

	Vector<length, int> v;

	std::cout << v.data[0] << std::endl;

	/*
	Matrix<length, int> m;

	int *data = new int[length];
	
	for (int i = 0; i < length; ++i) {
		*(data + i) = i + 1;
	}

	m.data = data;
	m.length = length;

	for (int i = 0; i < m.length; ++i) {
		std::cout << *(m.data + i) << " ";
	}
	*/

	return 0;
}
