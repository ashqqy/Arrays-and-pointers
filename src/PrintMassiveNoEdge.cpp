#include <stdio.h>

#include "./../include/PrintMassiveNoEdge.h"

//-------------------------------------------------------------

void PrintMassiveNoEdge (int data[], int* data_adr[], int data_n_massives)
    {
    for (int i = 0; i < data_n_massives - 1; i++)
        {
        for (int j = 0; j < (int) (data_adr[i + 1] - data_adr[i]); j++) // (int) (data_adr[i + 1] - data_adr[i]) - 
                                                                        // количество элементов ряда, которое считается через 
                                                                        // разность начала адресов соседних рядов
            {
            printf ("%d ", *(data_adr[i] + j)); // data_adr[i][j]
            }
        printf ("\n");
        }
    }

//-------------------------------------------------------------