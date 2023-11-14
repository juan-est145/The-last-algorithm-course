#include "header.h"
int main(void)
{
   t_linkedList *ptr;

   ptr = (t_linkedList *)malloc(sizeof(t_linkedList));
   ptr = CreateLinkedList();
   PrintLinkedList(ptr);
   
   AddLastNode(&ptr, 45689);
   printf("\n");
   PrintLinkedList(ptr);
   DeleteLinkedList(&ptr);
   return (0);
}