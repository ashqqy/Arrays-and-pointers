#include <stdio.h>

#include "./../include/PrintMassiveNoEdge.h"

//-------------------------------------------------------------

void PrintMassiveNoEdge (int* data_adr[], int n_lines, int n_elem_in_lines[])
    {
    for (int i = 0; i < n_lines; i++)
        {
        for (int j = 0; j < n_elem_in_lines[i]; j++)
            {
            printf ("%d ", *(data_adr[i] + j));
            }
        printf ("\n");
        }
    }

//-------------------------------------------------------------