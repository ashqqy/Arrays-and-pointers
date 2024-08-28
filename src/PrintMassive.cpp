#include <stdio.h>

#include "./../include/PrintMassive.h"

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