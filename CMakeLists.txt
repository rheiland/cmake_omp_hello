cmake_minimum_required (VERSION 3.10)

project (omp_hello)

# /usr/local/opt/libomp/lib/libomp.dylib
#set(OPENMP_LIBRARIES "/usr/local/opt/libomp/lib")
#set(OPENMP_INCLUDES "/usr/local/include")

#OPTION (USE_OpenMP "Use OpenMP to enamble <omp.h>" ON)

FIND_PACKAGE (OpenMP)
if (OPENMP_FOUND)
    set (CMAKE_C_FLAGS "${CMAKE_C_FLAGS} ${OpenMP_C_FLAGS}")
    set (CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} ${OpenMP_CXX_FLAGS}")
endif()
#set(OpenMP_C_FLAG "-fopenmp=libomp -Wno-unused-command-line-argument")
#set(CMAKE_C_FLAGS "-std=c11 -Xpreprocessor -fopenmp -L/usr/local/lib -I/usr/local/include -lomp")
#set(CMAKE_C_FLAGS "-std=c11 -Xpreprocessor -fopenmp  -I/usr/local/include /usr/local/lib/libomp.a")
#set(CMAKE_C_FLAGS "-std=c11 -Xpreprocessor -fopenmp -L/opt/homebrew/opt/libomp/lib//libomp.dylib -I/usr/local/include -lomp")
#set(CMAKE_C_FLAGS "-std=c++11 -Xpreprocessor -fopenmp -L/opt/homebrew/opt/libomp/lib -lomp")
set(CMAKE_C_FLAGS "-std=c11 -Xpreprocessor -fopenmp -I/opt/homebrew/opt/libomp/include -L/opt/homebrew/opt/libomp/lib -lomp")

add_executable(omp_hello omp_hello.c )