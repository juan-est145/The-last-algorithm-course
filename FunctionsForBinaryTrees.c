#include "header.h"

t_binary_tree* Add_Tree_Node(int value)
{
    t_binary_tree *new_node;

    new_node = (t_binary_tree*)malloc(sizeof(t_binary_tree));
    if (new_node == NULL)
    {
        return (NULL);
    }
    new_node->data = value;
    new_node->right = NULL;
    new_node->left = NULL;
    return (new_node);
}

t_binary_tree *Insert_Right_Node(t_binary_tree **root, int value)
{
    t_binary_tree *new_node;
    if (*root == NULL)
    {
        new_node = Add_Tree_Node(value);
        return (new_node); 
    }
    (*root)->right = Add_Tree_Node(value);
    return ((*root)->right);
}

t_binary_tree *Insert_Left_Node(t_binary_tree **root, int value)
{
    t_binary_tree *new_node;
    if (*root == NULL)
    {
        new_node = Add_Tree_Node(value);
        return (new_node); 
    }
    (*root)->left = Add_Tree_Node(value);
    return ((*root)->left);
}

void Free_Tree(t_binary_tree *root)
{
    if (root == NULL)
    {
        return ;
    }
    Free_Tree(root->left);
    Free_Tree(root->right);
    free(root);
}

void Print_tree_Pre_ordered(t_binary_tree *root)
{
    if (root == NULL)
    {
        return ;
    }
    printf("%d\n",root->data);
    Print_tree_Pre_ordered(root->left);
    Print_tree_Pre_ordered(root->right);
}

void Print_tree_In_ordered(t_binary_tree *root)
{
    if (root == NULL)
    {
        return ;
    }
    Print_tree_In_ordered(root->left);
    printf("%d\n",root->data);
    Print_tree_In_ordered(root->right);
}

void Print_tree_Post_ordered(t_binary_tree *root)
{
    if (root == NULL)
    {
        return ;
    }
    Print_tree_Post_ordered(root->left);
    Print_tree_Post_ordered(root->right);
    printf("%d\n",root->data);
}
