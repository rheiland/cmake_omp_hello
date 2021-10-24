/*
clang -I/usr/local/include  /usr/local/opt/libomp/lib/libomp.dylib omp_hello.c -o omp_hello

However!
~/git/cmake_omp_hello$ ./omp_hello 
Hello World from thread = 0
Number of threads = 1

*/

#include <omp.h>
#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[]) 
{
int nthreads, tid;

  omp_set_num_threads(3);

/* Fork a team of threads giving them their own copies of variables */
#pragma omp parallel private(nthreads, tid)
  {
  /* Obtain thread number */
  tid = omp_get_thread_num();
  printf("Hello World from thread = %d\n", tid);

  /* Only master thread does this */
  if (tid == 0) 
    {
    nthreads = omp_get_num_threads();
    printf("Number of threads = %d\n", nthreads);
    }

  }  /* All threads join master thread and disband */
}
