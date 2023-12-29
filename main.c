#include "header.h"
int main(void)
{
   int arr[] = { 10, 7, 8, 9, 1, 5 };
   QuickSort(arr, 0, (sizeof(arr) / sizeof(arr[0])) - 1);
   for (unsigned i = 0; i < (sizeof(arr) / sizeof(arr[0])); i++)
   {
      printf("%d\n", arr[i]);
   }
   
   return (0);
}