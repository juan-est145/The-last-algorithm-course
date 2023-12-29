#include "header.h"

static unsigned int Partition(int array[], unsigned int low, unsigned int high);
static void Swap(int *a, int *b);

void QuickSort(int array[], unsigned int low, unsigned int high)
{
    if (low < high)
    {
        unsigned int pi = Partition(array, low, high);
        QuickSort(array, low, pi - 1);
        QuickSort(array, pi + 1, high);
    }
}

static unsigned int Partition(int array[], unsigned int low, unsigned int high)
{
    int pivot = array[high];

    for (unsigned int i = 0; i < high; i++)
    {
        if (array[i] < pivot)
        {
            Swap(&array[low], &array[i]);
            low++;
        }
    }
    Swap(&array[low + 1], &array[high]);
    return (low + 1);
}

static void Swap(int *a, int *b) 
{
  int temporal = *a;
  *a = *b;
  *b = temporal;
}
