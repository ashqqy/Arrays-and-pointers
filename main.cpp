#include <stdio.h>

//-------------------------------------------------------------

void PrintMassive (int* data, size_t size_y, size_t size_x);
void SumMatrix (int *data1, int *data2, size_t size_y, size_t size_x);

//-------------------------------------------------------------

int main ()
    {
    int data1[][4] = {{10, 11, 12, 13}, 
                     {20, 21, 22, 23}, 
                     {30, 31, 32, 33}, 
                     {40, 41, 42, 43}, 
                     {50, 51, 52, 53}};

    size_t size_y = sizeof(data1) / sizeof(data[0]);
    size_t size_x = sizeof(data1[0]) / sizeof(data[0][0]);

    PrintMassive ((int*) data1, size_y, size_x);
    }

//-------------------------------------------------------------

void PrintMassive (int* data, size_t size_y, size_t size_x)
    {
    for (int y = 0; y < size_y; y++)
        {
        for (int x = 0; x < size_x; x++)
            {
            printf ("data[%d][%d] = %d; ", y, x, *(int*)((size_t)data + y * size_x * sizeof(int) + x * sizeof(int)));
            }
        printf ("\n");
        }
    }

//-------------------------------------------------------------

void SumMatrix (int *data1, int *data2, size_t size_y, size_t size_x)
    {
    }