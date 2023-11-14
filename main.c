#include "header.h"

int main(void)
{
   t_linkedList *ptr;

   ptr = (t_linkedList *)malloc(sizeof(t_linkedList));
   ptr->next = CreateLinkedList();
   PrintLinkedList(ptr->next);
   while (ptr != NULL)
   {
      t_linkedList *tmp = ptr;
      ptr = ptr->next;
      free(tmp);
   }
   
   return (0);
}


