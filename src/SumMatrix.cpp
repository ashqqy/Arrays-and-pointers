#include <stdio.h>

#include "./../include/SumMatrix.h"

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