#include <stdio.h>
#include <math.h>

#include "./../include/PrintMassive.h"
#include "./../include/SumMatrix.h"
#include "./../include/MultiplicationMatrix.h"
#include "./../include/StairMatrix.h"

//-------------------------------------------------------------

void PrintMassiveNoEdge (int data[], int data_adr[], int n_elements_in_massive);

//-------------------------------------------------------------

int main ()
    {
    int data[] = {10, 11, 12, 13, 14, 15,
                  20, 21, 22,
                  30, 31, 32, 33, 34,
                  40, 41, 42, 43};
    int data_adr[] = {0, 6, 3, 5, 4};

    int n_elements_in_massive = sizeof (data_adr) / sizeof (data_adr[0]) - 1; //первый ноль не считаем

    PrintMassiveNoEdge (data, data_adr, n_elements_in_massive);
    }

//-------------------------------------------------------------

void PrintMassiveNoEdge (int data[], int data_adr[], int n_elements_in_massive)
    {
    for (int i = 0; i < n_elements_in_massive; i++)
        {
        for (int j = 0; j < data_adr[i + 1]; j++)
            {
            printf ("%d ", *(data + data_adr[i] + j));
            }
        data_adr[i+1] += data_adr[i];
        printf ("\n");
        }
    }

//-------------------------------------------------------------