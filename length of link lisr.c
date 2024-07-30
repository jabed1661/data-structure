#include<stdio.h>
#include<stdlib.h>

typedef struct f1 node;

struct f1
{
    int data;
    node *next;
   // node *rev;
};
node *teil;
void print(node *head)
{
    node *temp;
    temp = head;
    int count;
    while (temp!=0)
    {
        printf("%d ",temp->data);
        printf("%d \n",&temp->data);
         count++;
        temp = temp->next;
        //count++;

    }
   // printf("%d",count);
}
void reverse()
{
     node *head,*current_node,*pre_node,*next_node,*temp;
    pre_node = 0;
    current_node = next_node = head;
    while(next_node!=0)
    {
        next_node= next_node->data;
        current_node->next = pre_node;
        pre_node = current_node;
        current_node = next_node;
    }
    temp = pre_node;
    teil = temp;


}
void rev()
{
    node *temp;
    temp = teil;
    int count;
    while (temp!=0)
    {
        printf("%d ",temp->data);
        printf("%d \n",&temp->data);
         count++;
        temp = temp->next;
        //count++;

    }
}


int main()
{
    node *head,*new_node,*temp;
    head = NULL;
    int size;
    printf("Enter the size of array : ");
    scanf("%d",&size);
    while(size--)
     {
        new_node= (node *) malloc(sizeof(node));
        scanf("%d",&new_node->data);

        new_node->next = NULL;
        if(head== NULL)
        {
            head = temp = new_node;
        }
        else
        {
            temp->next = new_node;
            temp = new_node;
        }
    }
    //temp = head;



    print(head);
    rev();
    //reverse();

}
