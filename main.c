#include "header.h"
int main(void)
{
   t_linkedList *ptr;

   ptr = (t_linkedList *)malloc(sizeof(t_linkedList));
   ptr = CreateLinkedList();
   PrintLinkedList(ptr);
   printf("\n");
   
   AddFirstNode(&ptr, 2);
   PrintLinkedList(ptr);
   printf("\n");

   AddLastNode(&ptr, 45689);
   PrintLinkedList(ptr);
   printf("\n");
   

   InsertAfterNode(&ptr->next, 7812);
   PrintLinkedList(ptr);
   printf("\n");

   DeleteLinkedList(&ptr);
   return (0);
}