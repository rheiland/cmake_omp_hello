# cmake_omp_hello

```
~/git/cmake_omp_hello$ cd build
~/git/cmake_omp_hello/build$ rm -rf *
~/git/cmake_omp_hello/build$ cmake ..
~/git/cmake_omp_hello/build$ make

~/git/cmake_omp_hello/build$ ldd omp_hello 
omp_hello:
	/usr/lib/libSystem.B.dylib (compatibility version 1.0.0, current version 1281.0.0)
  
~/git/cmake_omp_hello/build$ omp_hello 
Hello World from thread = 0
Hello World from thread = 2
Number of threads = 3
Hello World from thread = 1
```
