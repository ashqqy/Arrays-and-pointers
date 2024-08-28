#include <stdio.h>
#include <math.h>

#include "./../include/StairMatrix.h"

//-------------------------------------------------------------

void StairMatrix (int data[], size_t size_data)
    {
    int nMassives = (-1 + sqrt(1 + 8 * size_data/4)) / 2;
    for (int i = 0; i < nMassives; i++)
        {
        for (int j = (i * (i + 1)) / 2; j < (i + 1) * (i + 2) / 2; j++)
            {
            printf ("[%d]", data[j]);
            }
        printf ("\n");
        }
    }

//-------------------------------------------------------------