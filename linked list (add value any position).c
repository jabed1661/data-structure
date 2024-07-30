#include<stdio.h>
#include<stdlib.h>
struct node{

int data;
struct node *next;
};

int main()
{
    struct node *new_node,*head,*temp;
    head = NULL;
    printf("The size of array is : ");
    int num;
    scanf("%d",&num);
    printf("The list of array is : ");
    while (num--)
    {
        new_node = (struct node*) malloc (sizeof(struct node));
        scanf("%d",&new_node->data);
        new_node->next = NULL;
        if (head == NULL)
        {
            head = temp = new_node;

        }
        else
        {
            temp->next = new_node;
            temp = new_node;
        }
    }
    temp = head;
    printf("Enter the final list of array is : \n");
    while(temp!=0)
    {
        printf("%d ",temp->data);
        printf("%d \n",&temp->data);
        temp =temp->next ;

    }
    struct node *current;
    current= (struct node*) malloc(sizeof(struct node));

    printf("Enter the new digit : ");
    scanf("%d",&current->data);
   int i=1,posi;
   scanf("%d",&posi);
   temp = head;
    while(i<posi-1)
   {
       temp = temp->next;
       i++;
   }
   current->next = temp->next;
   temp->next  = current ;

    temp = head;
    printf("Enter the final list of array is : \n");
    while(temp!=0)
    {
        printf("%d ",temp->data);
        printf("%d\n",&temp->data);
        temp =temp->next ;

    }}


