extern "C" 
{
    #include "header.h"
}
#include <queue>
#include <iostream>

using std::queue;
using std::cout;
using std::endl;

void LevelOrder(t_binary_tree **root)
{
    if (root == NULL) return;
    queue<t_binary_tree*> childNodes;
    childNodes.push(*root);
    while (childNodes.empty() != true)
    {
        t_binary_tree *current = childNodes.front();
        cout << current->data<<endl;
        if(current->left != NULL) childNodes.push(current->left);
        if(current->right != NULL) childNodes.push(current->right);
        childNodes.pop();
    }
    
}