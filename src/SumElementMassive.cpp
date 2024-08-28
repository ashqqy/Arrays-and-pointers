#include "./../include/SumElementMassive.h"

//-------------------------------------------------------------

int SumElementMassive (int data[], size_t size)
    {
    int sum_element = 0;
    for (int i = 0; i < size; i++)
        {
        sum_element += data[i];
        }
    return sum_element;
    }

//-------------------------------------------------------------