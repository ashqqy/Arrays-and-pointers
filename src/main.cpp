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
    // вводим количество рядов
    printf ("Enter the number of lines: ");
    int n_lines = 0;
    scanf ("%d", &n_lines);

    // массив адресов
    int** data_adr = (int**) (calloc (n_lines, sizeof(int*)));

    // массив с количеством элементов в каждом ряду
    int* n_elem_in_lines = (int*) (calloc (n_lines, sizeof(int)));

    // вводим количество элементов в каждом ряду
    printf ("Enter the lenght of each line: ");
    for (int i = 0; i < n_lines; i++)
        scanf ("%d", &n_elem_in_lines[i]);

    for (int i = 0; i < n_lines; i++) // перебираем строки
        {
        printf ("Enter elements of line %d: ", i);
        int* data = (int*) calloc (n_elem_in_lines[i], sizeof(int));
        
        for (int j = 0; j < n_elem_in_lines[i]; j++) // перебираем элементы строк
            scanf ("%d", &data[j]);

        *(data_adr + i) = data;
        }

    PrintMassiveNoEdge (data_adr, n_lines, n_elem_in_lines);
    }

//-------------------------------------------------------------