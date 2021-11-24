# mpi-matrix
MPI library.  Matrix comparisons

### Separate complilation stage

Run this command to compiple classic algorithm:
```
mpicc -o output/classic ./src/classic.cpp -lstdc++
```

Or this one, to compiple Strassen algorithm:
```
mpicc -o output/strassen ./src/strassen.cpp -lstdc++
```

### Separate output stage

Run this command to get the test output of classic algorithm:
```
mpirun --hostfile ./hostfile -np 4 ./output/classic
mpirun --hostfile ./hostfile -np 8 ./output/classic
mpirun --hostfile ./hostfile -np 12 ./output/classic
```

Or this one, to get the test output of Strassen algorithm:
```
mpirun --hostfile ./hostfile -np 4 ./output/strassen
mpirun --hostfile ./hostfile -np 8 ./output/strassen
mpirun --hostfile ./hostfile -np 12 ./output/strassen
```

### Comparison stage

Run this command to compare classic and Strasssen algorithms by different matrix shapes:
```
mpicc -o output/analysis ./src/analysis.cpp -lstdc++
mpirun --hostfile ./hostfile -np 1 ./output/analysis
```
