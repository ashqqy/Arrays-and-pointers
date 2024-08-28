#include <stdio.h>
#include <assert.h>

//-------------------------------------------------------------

void PrintMassive (int* data, size_t size_y, size_t size_x);
void SumMatrix (int *data1, int *data2, size_t size_y, size_t size_x);
void MultiplicationMatrix (int* data1, int* data2, size_t size1_y, size_t size1_x, size_t size2_y, size_t size2_x);

//-------------------------------------------------------------

int main ()
    {
    int data1[][4] = {{10, 11, 12, 13}, 
                     {20, 21, 22, 23}, 
                     {30, 31, 32, 33}, 
                     {40, 41, 42, 43}, 
                     {50, 51, 52, 53}};

    int data2[][4] = {{0,  1,  2,  3}, 
                      {10, 11, 12, 13}, 
                      {20, 21, 22, 23}, 
                      {30, 31, 32, 33}, 
                      {40, 41, 42, 43}};

    // int data1[][3] = {{3,  -1, 2}, //матрицы для умножения
    //                   {4,  2,  0}, 
    //                   {-5, 6,  1}};
    // int data2[][2] = {{8, 1},
    //                   {7, 2}, 
    //                   {2, -3}};

    size_t size1_y = sizeof(data1) / sizeof(data1[0]);
    size_t size1_x = sizeof(data1[0]) / sizeof(data1[0][0]);
    //printf("[%d]\n", size1_x);

    size_t size2_y = sizeof(data2) / sizeof(data2[0]);
    //printf("[%d]\n", size2_y);
    size_t size2_x = sizeof(data2[0]) / sizeof(data2[0][0]);

   // PrintMassive ((int*) data1, size_y, size_x);
   // SumMatrix ((int*) data1, (int*) data2, size_y, size_x);
   MultiplicationMatrix ((int*) data1, (int*) data2, size1_y, size1_x, size2_y, size2_x);
    }

//-------------------------------------------------------------

void PrintMassive (int* data, size_t size_y, size_t size_x)
    {
    for (int y = 0; y < size_y; y++)
        {
        for (int x = 0; x < size_x; x++)
            {
            printf ("data[%d][%d] = %d; ", y, x, 
                    *(int*)((size_t)data + y * size_x * sizeof(int) + x * sizeof(int)));
            }
        printf ("\n");
        }
    }

//-------------------------------------------------------------

void SumMatrix (int *data1, int *data2, size_t size_y, size_t size_x)
    {
    for (int y = 0; y < size_y; y++)
        {
        for (int x = 0; x < size_x; x++)
            {
            printf ("data(1+2)[%d][%d] = %d; ", y, x, 
                    *(data1 + y * size_x + x) + *(data2 + y * size_x + x));
            }
        printf ("\n");
        }
    }

//-------------------------------------------------------------

void MultiplicationMatrix (int* data1, int* data2, size_t size1_y, size_t size1_x, size_t size2_y, size_t size2_x)
    {
    assert (size1_x == size2_y); 

    int data_multiple[size2_y][size2_x] = {};

    int data_m_element = 0;

    for (int data1_y = 0; data1_y < size1_y; data1_y++)
        {
        for (int data2_x = 0; data2_x < size2_x; data2_x++)
            {
            for (int perebor = 0; perebor < size1_x; perebor++)
                {
                data_m_element += *(data1 + data1_y * size1_x + perebor) * *(data2 + perebor * size2_x + data2_x); // data1[data1_y][perebor] * data2[perebor][data2_x]
                }
            data_multiple[data1_y][data2_x] = data_m_element;
            data_m_element = 0;
            }
        }
    PrintMassive ((int*) data_multiple, size2_y, size2_x);
    }