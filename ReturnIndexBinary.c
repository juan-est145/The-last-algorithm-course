#include "header.h"

int ReturnIndexBinary(int array[],int arrayLength, int value)
{
   int smallerIndex = 0;
   
   while (smallerIndex <= arrayLength)
   {
      int middleIndex = floor(smallerIndex + (arrayLength - smallerIndex)/2);
      if(array[middleIndex] == value)
      {
         return (middleIndex);
      }
      else if(array[middleIndex] > value)
      {
         arrayLength = middleIndex;
      }
      else if(array[middleIndex] < value)
      {
         smallerIndex = middleIndex + 1;
      }
   }
   return (-1);
}