
#include<stdio.h>
#include<stdlib.h>

typedef struct f1 node;

struct f1
{
    int data;
    node *next;
};
void delate(node*head)
{
    printf("The final list of array is : \n");
    node * temp;
     temp = head;
     while (temp!=0)
     {
         printf("%d ",temp->data);
         printf("%d \n",&temp->data);
         temp = temp->next;
     }
}

 int main()
 {
     node *new_node,*head, *temp;
     head = NULL;
     int num;
     scanf("%d",&num);
     printf("The list of array is : ");
     while(num--)
     {
         new_node = (node*) malloc(sizeof(node));
        // printf("The %d digit is: ",num);
         scanf("%d",&new_node->data);
         new_node->next = NULL;

     if(head == NULL)
     {
         head = temp = new_node;
     }
     else
     {
         temp->next = new_node;
         temp = new_node;
     }}

     delate(head);

     node *next_node;
     int i=1,posi;

     temp = head;
     scanf("%d",&posi);
     while(i<posi-1)
     {
         temp=temp->next;
         i++;
     }
     next_node = temp->next;
     temp->next = next_node->next;
     free(next_node);



    delate(head);
 }

