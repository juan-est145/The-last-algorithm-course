#include "header.h"
int array[R_B_Size];
int head = -1;
int tail = -1;

static bool IsFull()
{
   if ((tail + 1) % R_B_Size == head) return (true);
    return (false);
}

static bool IsEmpty()
{
    if (head == -1 && tail == -1) return (true);
    return (false);
}

void EnqueueRing(int value)
{
    if (IsFull() == true)
    {
        printf("Could not enque, Ring is full");
        return ;
    }
    if (IsEmpty() == true)
    {
        head++;
        tail++;
    }
    else
    {
        tail = (tail + 1) % R_B_Size;
    }
    array[tail] = value;    
}

void DequeueRing()
{
    if (IsEmpty() == true)
    {
        printf("Error, Queue is empty");
        return; 
    }
    else if (head == tail)
    {
        head = -1;
        tail = -1;
        return ;
    }
    head = (head + 1) % R_B_Size;
}

int ReturnHead()
{
	if(head == -1)
	{
		printf("Error: cannot return front from empty queue\n");
		return -1; 
	}
	return array[head];
}