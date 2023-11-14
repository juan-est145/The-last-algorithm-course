#ifndef HEADER_H
#define HEADER_H
#endif

#include <unistd.h>
#include <string.h>
#include <stdio.h>
#include <stdint.h>
#include <math.h>
#include <stdbool.h>
#include <stdlib.h>

typedef struct s_struct
{
    int data;
    struct s_struct *next;
}t_linkedList;

int ReturnIndexBinary(int array[],int arrayLength, int value);
int TwoCrystalBalls(bool array[], int length);
void	BubbleSorting(int *tab, int size);
void PrintLinkedList(t_linkedList *node);
t_linkedList* CreateLinkedList();