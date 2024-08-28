#include <stdio.h>
#include <math.h>

#include "./../include/PrintMassive.h"
#include "./../include/SumMatrix.h"
#include "./../include/MultiplicationMatrix.h"
#include "./../include/StairMatrix.h"
#include "./../include/PrintMassiveNoEdge.h"
#include "./../include/SumElementMassive.h"

//-------------------------------------------------------------

int main()
    {
    printf ("Enter the number of lines: ");
    int data_n_massives = 0;
    scanf ("%d", &data_n_massives);
    data_n_massives += 1;
    printf ("\n");

    printf ("Enter the length of each line: ");
    int data_len_massives[data_n_massives] = {};
    printf ("\n");

    for (int i = 1; i < data_n_massives; i++)
        {
        printf ("line %d: ", i);
        scanf ("%d", &data_len_massives[i]); 
        }

    int data_n_elements = SumElementMassive (data_len_massives, data_n_massives);
    int data[data_n_elements] = {};

    for (int i = 0; i < data_n_elements; i++)
        {
        printf ("Element %d: ", i);
        scanf ("%d", &data[i]);
        }

    // int data[] = {10, 11, 12, 13, 14, 15,
    //               20, 21, 22,
    //               30, 31, 32, 33, 34,
    //               40, 41, 42, 43};

    // int data_len_massives[] = {0, 6, 3, 5, 4}; // длина каждого ряда
    // int data_n_massives = sizeof (data_len_massives) / sizeof (data_len_massives[0]); // количество рядов

    int data_offset_massives[data_n_massives] = {}; // смещение каждого массива относительно начала даты

    for (int j = 1; j < data_n_massives; j++) // заполняем data_offset_massives
        {
        data_offset_massives[j] = data_offset_massives[j-1] + data_len_massives[j];
        }

    int* data_adr[data_n_massives] = {}; // адреса начала рядов и адрес конца последнего ряда
    
    for (int i = 0; i < data_n_massives; i++) // заполняем data_adr
        {
        data_adr[i] = data + data_offset_massives[i];
        }

    PrintMassiveNoEdge (data, data_adr, data_n_massives);
    }

//-------------------------------------------------------------