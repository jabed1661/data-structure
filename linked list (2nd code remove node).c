#include<stdio.h>


typedef struct node Node;

struct node{

  int data;
   Node *next;



};

Node *remove_node(Node *head, Node *node)
{
    if(node==head)
    {
        head = node->next;
        free(node);
        return head;
    }
    Node *current_node= head;
    while(current_node != NULL)
    {
        if (current_node->next == node)
        {
            break;
        }
        current_node= current_node->next;
    }
    if (current_node== NULL)
    {
        return head;
    }
    current_node->next = node->next;
    free(node);
    return head;
}

int main()
{
    Node *n;
    n = remove_node(10,NULL);
    int num;
    scanf("%d",&num);
    while(num--)
    {
        printf("\n%d number is : ");
        scanf("%d",&n);
    }
    printf("data = %d\n",n->data);
    return 0;
}

