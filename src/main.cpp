#include <stdio.h>
#include <math.h>

#include "./../include/PrintMassive.h"
#include "./../include/SumMatrix.h"
#include "./../include/MultiplicationMatrix.h"
#include "./../include/StairMatrix.h"

//-------------------------------------------------------------

int main ()
    {
    int data[] = {1, 1, 2, 1, 2, 3, 1, 2, 3, 4}; // матрица для лесенки
    StairMatrix (data, sizeof(data));
    }

//-------------------------------------------------------------