#include<stdio.h>
#include<stdlib.h>

typedef struct node tree;

struct node

{
    int data;
    tree *left;
    tree *right;
};

tree *creat(int data)
{
    tree *new_node = (tree*) malloc(sizeof(tree));
    new_node->data = data;
    new_node->left = NULL;
    new_node->right= NULL;
    return new_node;
}

void inorder(tree *root)
{
    if(root==NULL)
    {
        return;
    }
    else
    {
        inorder(root->left);
        printf("%d ",root->data);
        inorder(root->right);
    }
}
tree *insert(tree *root,int data)
{
    if (root == NULL)
    {
        return creat(data);
    }
    if (root>root->data)
    {
        root->right = insert(root->right,data);
    }
    else if (root<root->data)
    {
        root->left = insert(root->left,data);

    }

}

int main()
{
    tree *root=NULL;
    root = insert(root,10);
    root = insert(root,15);
    root = insert(root,8);
    root = insert(root,12);
    inorder(root);

}
