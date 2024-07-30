
#include<stdio.h>
#include<stdlib.h>


/*
         5
       /   \
      10    2
     / \   / \
    3   2




*/
typedef struct Tree tree;

struct Tree
{
    int data;
   tree *left;
   tree *right;
};
tree *root =NULL;

tree *creat(int data)
{

    tree *new_node=(tree*) malloc(sizeof(tree));
    new_node->data = data;
    new_node->left = NULL;
    new_node->right = NULL;
    return new_node;
}

void inorder(tree *root)
{
    //inorder ar jonno printf middle a bosbe .
    //preorder ar jonno printf 1st a bosbe .
    //postorder ar jonno printf last a bosbe .

    if (root==NULL)
    {
        return;
    }

    inorder(root->left);
    printf("%d ",root->data);
    inorder(root->right);
}
void preorder(tree *root)
{
    //inorder ar jonno printf middle a bosbe .
    //preorder ar jonno printf 1st a bosbe .
    //postorder ar jonno printf last a bosbe .

    if (root==NULL)
    {
        return;
    }
    printf("%d ",root->data);
    preorder(root->left);
    preorder(root->right);

}

void postorder(tree *root)
{
    //inorder ar jonno printf middle a bosbe .
    //preorder ar jonno printf 1st a bosbe .
    //postorder ar jonno printf last a bosbe .

    if (root==NULL)
    {
        return;
    }
    postorder(root->left);
    postorder(root->right);
    printf("%d ",root->data);
}

int main()
{
    root=creat(5);
    root->left=creat(10);
    root->right=creat(2);
    root->left->left=creat(3);
    root->left->right=creat(2);
    printf("Enter inorder data : ");
    inorder(root);
    printf("\nEnter preorder data : ");
    preorder(root);
    printf("\nEnter preorder data : ");
    postorder(root);




    return 0;
}

