### Fourth Program

Creating a Binary Tree with Structures and Nodes

```C
// Learning Binary Trees and Structures

#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *left;
    struct node *right;
};

struct node* newNode(int data) {
    struct node* node = (struct node*)malloc(sizeof(struct node));
    node->data = data;
    node->left = NULL;
    node->right = NULL;
    return(node);
}

int main() {
    /*
    Creating this binary tree
            1
          /   \
         2     3
        / \   / \
       4   5 6   7          */
    struct node *root   = newNode(1);
    root->left          = newNode(2);
    root->right         = newNode(3);
    root->left->left    = newNode(4);
    root->left->right   = newNode(5);
    root->right->left   = newNode(6);
    root->right->right  = newNode(7);
    getchar();
    return 0;
}
```
