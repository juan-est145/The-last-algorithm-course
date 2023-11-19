#include "header.h"
int main(void)
{
   t_linkedList *stack = NULL;
   Push(&stack, 10);
   Push(&stack, 20);

   PrintLinkedList(stack);
   Pop(&stack);
   printf("\n");
   PrintLinkedList(stack);
   return (0);
}