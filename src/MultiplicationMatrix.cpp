#include <stdio.h>
#include <assert.h>

#include "./../include/MultiplicationMatrix.h"
#include "./../include/PrintMassive.h"

//-------------------------------------------------------------

void MultiplicationMatrix (int* data1, size_t size1_y, size_t size1_x, int* data2, size_t size2_y, size_t size2_x)
    {
    assert (size1_x == size2_y); 

    int data_multiple[size2_y][size2_x] = {}; // создаем 3 матрицу с размерами 2 матрицы, 
                                              // в которую будем складывать результаты умножения

    int data_multiple_element = 0; // создаем элемент 3 матрицы, который будем заполнять в цикле

    for (int data1_y = 0; data1_y < size1_y; data1_y++) // перебираем строки 1 матрицы
        {
        for (int data2_x = 0; data2_x < size2_x; data2_x++) // перебираем столбцы 2 матрицы
            {
            for (int perebor = 0; perebor < size1_x; perebor++) // перебираем одной переменной сразу столбцы 1 матрицы и строки 2 матрицы
                {
                data_multiple_element += *(data1 + data1_y * size1_x + perebor) * 
                                         *(data2 + perebor * size2_x + data2_x); // data1[data1_y][perebor] * data2[perebor][data2_x]
                }
            data_multiple[data1_y][data2_x] = data_multiple_element; 
            data_multiple_element = 0;
            }
        }
    PrintMassive ((int*) data_multiple, size2_y, size2_x);
    }

//-------------------------------------------------------------