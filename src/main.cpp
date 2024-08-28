#include <stdio.h>
#include <math.h>

#include "./../include/PrintMassive.h"
#include "./../include/SumMatrix.h"
#include "./../include/MultiplicationMatrix.h"
#include "./../include/StairMatrix.h"

//-------------------------------------------------------------

void PrintMassiveNoEdge (int data[], int* data_adr[], int data_n_massives);

//-------------------------------------------------------------

int main ()
    {
    int data[] = {10, 11, 12, 13, 14, 15,
                  20, 21, 22,
                  30, 31, 32, 33, 34,
                  40, 41, 42, 43};

    int data_len_massives[] = {0, 6, 3, 5, 4}; // длина каждой строки
    int data_n_massives = sizeof (data_len_massives) / sizeof (data_len_massives[0]); // количество строк

    int data_offset_massives[data_n_massives] = {}; // смещение каждого массива относительно начала даты

    for (int j = 1; j < data_n_massives; j++) // заполняем data_offset_massives
        {
        data_offset_massives[j] = data_offset_massives[j-1] + data_len_massives[j];
        }

    int* data_adr[data_n_massives] = {}; // адреса начала строк и адрес конца последней строки
    
    for (int i = 0; i < data_n_massives; i++) // заполняем data_adr
        {
        data_adr[i] = data + data_offset_massives[i];
        }

    // printf ("data[2] = %d; data_adr[2] = %d", data + 14, data_adr[3]);
    PrintMassiveNoEdge (data, data_adr, data_n_massives);
    }

//-------------------------------------------------------------

void PrintMassiveNoEdge (int data[], int* data_adr[], int data_n_massives)
    {
    for (int i = 0; i < data_n_massives - 1; i++)
        {
        for (int j = 0; j < (int) (data_adr[i + 1] - data_adr[i]); j++) // (int) (data_adr[i + 1] - data_adr[i]) - 
                                                                        // количество элементов строки, которое считается через 
                                                                        // разность начала адресов соседних строк
            {
            // printf ("%d", (int) ((data_adr[i + 1] - data_adr[i])));
            printf ("%d ", *(data_adr[i] + j)); // data_adr[i][j]
            }
        printf ("\n");
        }
    }

//-------------------------------------------------------------