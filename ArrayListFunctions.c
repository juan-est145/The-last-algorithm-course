#include "header.h"

t_arrayList* CreateArrayList(int initialCapacity) 
{
    t_arrayList* list = malloc(sizeof(t_arrayList));
    if (list == NULL) {
        printf("Memory allocation failed.\n");
        exit(EXIT_FAILURE);
    }
    list->array = malloc(initialCapacity * sizeof(int));
    if (list->array == NULL) {
        printf("Memory allocation failed.\n");
        exit(EXIT_FAILURE);
    }
    list->size = 0;
    list->capacity = initialCapacity;
    return list;
}

void Resize(t_arrayList *list) 
{
    list->capacity *= 2;
    list->array = realloc(list->array, list->capacity * sizeof(int));
    if (list->array == NULL) 
    {
        printf("Memory allocation failed.\n");
        exit(EXIT_FAILURE);
    }
}

void Append(t_arrayList* list, int value) 
{
    if (list->size >= list->capacity) {
        resize(list);
    }
    list->array[list->size++] = value;
}

void FreeArrayList(t_arrayList* list) 
{
    free(list->array);
    free(list);
}