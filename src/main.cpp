#include <stdio.h>

#include "./../include/PrintMassive.h"
#include "./../include/SumMatrix.h"
#include "./../include/MultiplicationMatrix.h"

//-------------------------------------------------------------

int main ()
    {
    // int data1[][4] = {{10, 11, 12, 13}, 
    //                   {20, 21, 22, 23}, 
    //                   {30, 31, 32, 33}, 
    //                   {40, 41, 42, 43}, 
    //                   {50, 51, 52, 53}};

    // int data2[][4] = {{0,  1,  2,  3}, 
    //                   {10, 11, 12, 13}, 
    //                   {20, 21, 22, 23}, 
    //                   {30, 31, 32, 33}, 
    //                   {40, 41, 42, 43}};

    int data1[][3] = {{3,  -1, 2}, //матрицы для умножения
                      {4,  2,  0}, 
                      {-5, 6,  1}};
    int data2[][2] = {{8, 1},
                      {7, 2}, 
                      {2, -3}};

    size_t size1_y = sizeof(data1) / sizeof(data1[0]);
    size_t size1_x = sizeof(data1[0]) / sizeof(data1[0][0]);

    size_t size2_y = sizeof(data2) / sizeof(data2[0]);
    size_t size2_x = sizeof(data2[0]) / sizeof(data2[0][0]);

    MultiplicationMatrix ((int*) data1, size1_y, size1_x, (int*) data2, size2_y, size2_x);
    }

//-------------------------------------------------------------