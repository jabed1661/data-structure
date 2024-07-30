
#include<stdio.h>
#include<stdlib.h>
typedef struct f1 node;
struct f1
{
    int data;
    node *next;
};
node *head,*new_node,*temp;

void creat(int num)
{
    head = NULL;
    //int num;
    while (num--)
    {
        new_node = (node*) malloc(sizeof(node));
        printf("Enter the data : ");
        scanf("%d",&new_node->data);
        new_node->next = 0;
        if(head == NULL)
        {
            head = temp = new_node;
        }
        else
        {
            temp->next = new_node;
            temp = new_node;
        }
    }
}

void print()
{
    temp = head;
    printf("The list of array is : \n");
    while(temp!=0)
    {
        printf("%d ",temp->data);
        printf("%d \n",&temp->data);
        temp = temp->next;
    }
}
void delet1st()
{
    temp = head;
    head = head->next;
    free(head);
}
void deletany(int x,int num)
{

     if (x==1)
    {
      delet1st();
    }

    else
   {
    temp = head;
    int i =1;
    while(i<x-1)
    {
        temp = temp->next;
        i++;
    }
     new_node = temp->next;
     if (x==num)
     {
         temp->next = NULL;
         free(new_node);
     }
     else
     {
        temp->next = new_node->next;
        free(new_node);
     }
    }
}
int main()
{
    int num;
    printf("Enter the number : ");
    scanf("%d",&num);
    creat(num);
    print();
    int x;
    printf("Enter the position : ");
    scanf("%d",&x);
    deletany(num,x);
    print(x);
 }
