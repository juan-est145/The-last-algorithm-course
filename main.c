#include "header.h"
int main(void)
{
   t_binary_tree *root;

   root = Add_Tree_Node(7);
   Insert_Left_Node(&root, 23);
   Insert_Right_Node(&root, 3);
   
   Insert_Left_Node(&root->left, 5);
   Insert_Right_Node(&root->left, 4);

   Insert_Left_Node(&root->right, 18);
   Insert_Right_Node(&root->right, 21);

   printf("Here comes the values pre-ordered\n");
   Print_tree_Pre_ordered(root);
   printf("Here comes the values in-ordered\n");
   Print_tree_In_ordered(root);
   printf("Here comes the values post-ordered\n");
   Print_tree_Post_ordered(root);
   Free_Tree(root);
   return (0);
}