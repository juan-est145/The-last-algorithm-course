#include "header.h"
void PrintLinkedList(t_linkedList *node)
{
   while (node != NULL)
   {
      printf("%d\n", node->data);
      node = node->next;
   }
   
}