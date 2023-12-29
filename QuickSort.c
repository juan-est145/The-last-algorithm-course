#include "header.h"

static int Partition(int array[], int low, int high);
static void Swap(int *a, int *b); 

void QuickSort(int array[], int low, int high) 
{
    if (low < high)
    {
        int pivot = Partition(array, low, high);
        QuickSort(array, low, pivot - 1);
        QuickSort(array, pivot + 1, high);
    }
}

static int Partition(int array[], int low, int high) 
{
    int swap = low - 1;
    int pivot = array[high];

    for (unsigned int j = low; j < (unsigned int)high; j++)
    {
        if (array[j] <= pivot)
        {
            swap++;
            Swap(&array[swap], &array[j]);
        }
    }
    Swap(&array[swap + 1], &array[high]);
    return (swap + 1);
}



static void Swap(int *a, int *b) 
{
  int t = *a;
  *a = *b;
  *b = t;
}