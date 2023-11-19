#include "header.h"
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

int Pop(t_linkedList **tail)
{
    if(*tail == NULL)
    {
        printf("There's no value left to pop");
        return (*tail)->data;
    }
    else
    {
        t_linkedList *temp = *tail;
        int value = temp->data;
        *tail = (*tail)->next;
        free(temp);
        return (value);
    }
}