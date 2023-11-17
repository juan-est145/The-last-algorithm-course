#include "header.h"
void Enqueue(int value, t_linkedList **head, t_linkedList **tail)
{
    t_linkedList *newNode = (t_linkedList *)malloc(sizeof(t_linkedList));

    newNode->data = value;
    newNode->next = NULL;
    if(head == NULL && tail == NULL)
    {
        *head = *tail = newNode;
        return;
    }
    (*tail)->next = newNode;
    *tail = newNode;
}

int Dequeue(t_linkedList **head, t_linkedList **tail)
{
    if(head == NULL)
    {
        printf("Queue is empty");
        return (-1);
    }
    t_linkedList *temp = *head;
    int element = temp->data;
    if(head == tail)
    {
        head = tail = NULL;
    }
    else
    {
        *head = (*head)->next;
    }
    free(temp);
    return (element);
}