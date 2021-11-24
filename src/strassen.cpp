#include <iostream>
#include </usr/local/include/mpi.h>

int main(int argc, char** argv) {
        MPI_Init(NULL, NULL);

        MPI_Status status;

        int rank;
        int size;

        MPI_Comm_rank(MPI_COMM_WORLD, &rank);
        MPI_Comm_size(MPI_COMM_WORLD, &size);
	
	std::cout << "Hello, world" << std::endl;

	MPI_Finalize();

	return 0;
}
