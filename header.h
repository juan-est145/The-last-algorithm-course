#ifndef HEADER_H
#define HEADER_H
#ifndef R_B_Size
#define R_B_Size 10
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

typedef struct s_structList{
    int *array;
    size_t size;
    size_t capacity;
} t_arrayList;

typedef struct s_struct_tree
{
    int data;
    struct s_struct_tree *left;
    struct s_struct_tree *right;
}t_binary_tree;

int ReturnIndexBinary(int array[],int arrayLength, int value);
int TwoCrystalBalls(bool array[], int length);
void	BubbleSorting(int *tab, int size);
void PrintLinkedList(t_linkedList *node);
t_linkedList* CreateLinkedList();
void AddLastNode(t_linkedList **linkedList, int value);
void DeleteLinkedList(t_linkedList **linkedList);
void AddFirstNode(t_linkedList **linkedList, int value);
void InsertAfterNode(t_linkedList **linkedList, int value);
void Enqueue(int value, t_linkedList **head, t_linkedList **tail);
int Dequeue(t_linkedList **head, t_linkedList **tail);
void Push(t_linkedList **tail, int value);
int Pop(t_linkedList **tail);
t_arrayList* CreateArrayList(int initialCapacity);
void Resize(t_arrayList *list);
void Append(t_arrayList* list, int value);
void FreeArrayList(t_arrayList* list);
void QuickSort(int array[], int low, int high);
t_binary_tree* Add_Tree_Node(int value);
t_binary_tree *Insert_Right_Node(t_binary_tree **root, int value);
t_binary_tree *Insert_Left_Node(t_binary_tree **root, int value);
void Free_Tree(t_binary_tree *root);
void Print_tree_Pre_ordered(t_binary_tree *root);
void Print_tree_In_ordered(t_binary_tree *root);
void Print_tree_Post_ordered(t_binary_tree *root);
t_binary_tree *Insert_recursive(t_binary_tree **root, int value);
void EnqueueRing(int value);
void DequeueRing();
int ReturnHead();
#endif