#include <iostream>
#include </usr/local/include/mpi.h>
#include "../lib/matrix.h"

int main(int argc, char** argv) {
	Matrix<int> m;

	size_t length = 5;
	int *data = new int[length];
	
	for (int i = 0; i < length; ++i) {
		*(data + i) = i + 1;
	}

	m.data = data;
	m.length = length;

	for (int i = 0; i < m.length; ++i) {
		std::cout << *(m.data + i) << " ";
	}

	return 0;
}
