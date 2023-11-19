#include "header.h"
int main(void)
{
   t_linkedList *stack = NULL;
   Push(&stack, 10);
   Push(&stack, 20);

   PrintLinkedList(stack);
   return (0);
}

void Push(t_linkedList **tail, int value)
{
   if(*tail == NULL)
   {
      *tail = (t_linkedList *)malloc(sizeof(t_linkedList));
      (*tail)->data = value;
      (*tail)->next = NULL;
   }
   else
   {
      t_linkedList *node = (t_linkedList *)malloc(sizeof(t_linkedList));
      node->data = value;
      node->next = *tail;
      *tail = node;
   }
}