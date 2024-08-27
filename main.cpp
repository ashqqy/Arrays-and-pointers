#include <stdio.h>

//-------------------------------------------------------------

void PrintMassive (int* data, size_t size_y, size_t size_x);

//-------------------------------------------------------------

int main ()
    {
    int data[][4] = {{10, 11, 12, 13}, 
                     {20, 21, 22, 23}, 
                     {30, 31, 32, 33}, 
                     {40, 41, 42, 43}, 
                     {50, 51, 52, 53}};

    size_t size_y = sizeof(data) / sizeof(data[0]);
    size_t size_x = sizeof(data[0]) / sizeof(data[0][0]);
    printf ("size_y = %d \n", size_y);
    printf ("size_x = %d \n", size_x);

    PrintMassive ((int*) data, size_y, size_x);
    }

//-------------------------------------------------------------

void PrintMassive (int* data, size_t size_y, size_t size_x)
    {
    for (int y = 0; y < size_y; y++)
        {
        for (int x = 0; x < size_x; x++)
            {
            printf ("data[%d][%d] = %d \n", y, x, *(data + y*size_x + x));
            }
        }
    }