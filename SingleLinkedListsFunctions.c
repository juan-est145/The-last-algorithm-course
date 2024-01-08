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

void AddFirstNode(t_linkedList **linkedList, int value)
{
   t_linkedList *firstNode = (t_linkedList*)malloc(sizeof(t_linkedList));

   firstNode->data = value;
   firstNode->next = *linkedList;
   *linkedList = firstNode;
}

void AddLastNode(t_linkedList **linkedList, int value)
{
   t_linkedList *lastNode = (t_linkedList *)malloc(sizeof(t_linkedList));

   lastNode->data = value;
   lastNode->next = NULL;

   t_linkedList *ptr = *linkedList;

   while (ptr->next != NULL)
   {
      ptr = ptr->next;
   }
   ptr->next = lastNode;
   
}

void InsertAfterNode(t_linkedList **linkedList, int value)
{
   if (linkedList == NULL) 
   {
      printf("The given previous node cannot be NULL");
      return;
   }

   t_linkedList *insertionNode = (t_linkedList *)malloc(sizeof(t_linkedList));

   insertionNode->data = value;
   insertionNode->next = (*linkedList)->next;
   (*linkedList)->next = insertionNode;
}

void DeleteLinkedList(t_linkedList **linkedList)
{
   while (*linkedList != NULL)
   {
      t_linkedList *tmp = *linkedList;
      *linkedList = (*linkedList)->next;
      free(tmp);
   }
}

void DeleteNode(t_linkedList **linkedList)
{
   if (*linkedList == NULL) return ; 
   t_linkedList *temp = *linkedList;
   *linkedList = (*linkedList)->next;
   free(temp);
}

void PrintLinkedList(t_linkedList *node)
{
   while (node != NULL)
   {
      printf("%d\n", node->data);
      node = node->next;
   }
   
}