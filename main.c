#include "header.h"

int main(void)
{
   t_linkedList *ptr;

   ptr = (t_linkedList *)malloc(sizeof(t_linkedList));
   ptr->next = CreateLinkedList();
   PrintLinkedList(ptr->next);
   free(ptr);
   return (0);
}


