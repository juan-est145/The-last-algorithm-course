#include "header.h"

t_linkedList* CreateLinkedList()
{
   t_linkedList *firstNode;
   t_linkedList *secondNode;
   t_linkedList *thirdNode;
   t_linkedList *fourthNode;

   firstNode = (t_linkedList*)malloc(sizeof(t_linkedList));
   secondNode = (t_linkedList*)malloc(sizeof(t_linkedList));
   thirdNode = (t_linkedList*)malloc(sizeof(t_linkedList));
   fourthNode = (t_linkedList*)malloc(sizeof(t_linkedList));

   firstNode->data = 100;
   secondNode->data = 45;
   thirdNode->data = 5;
   fourthNode->data = 78;

   firstNode->next = secondNode;
   secondNode->next = thirdNode;
   thirdNode->next = fourthNode;
   fourthNode->next = NULL;

   return(firstNode);
}