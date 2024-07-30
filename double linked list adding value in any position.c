#include<stdio.h>
#include<stdlib.h>

typedef struct f1 node;

struct f1
{
    int data;
    node *pre;
    node *next;
};
node *head,*new_node,*temp,*tail;

void creat(int choice)
{

    head = 0;

    //printf("Enter the size : ");
    //scanf("%d",&choice);
    while(choice--)
    {
        new_node=(node*) malloc(sizeof(node));
        printf("Enter the data : ");
        scanf("%d",&new_node->data);
        new_node->pre=0;
        new_node->next=0;
        if (head == NULL)
        {
            head = temp = new_node;
            tail  = temp;
        }
        else
        {
            temp->next  = new_node;
            new_node->pre = temp;
            temp= new_node;
            tail = temp;
        }
       // printf("While if you continue the linked list enter 1 else enter 0 : ");
       // scanf("%d",&choice);
        //printf("Enter the value : ");
    }
}

void print()
{
    temp = head;
    printf("Enter the final list of array is : \n");
    while (temp!=0)
    {
        printf("%d ",temp->data);
        printf("%d \n",&temp->data);
        temp = temp->next;
    }
}

void reverse()
{
    temp = tail;
    printf("Enter the reverse list of array is : \n");
    while (temp!=0)
    {
        printf("%d ",temp->data);
        printf("%d \n",&temp->data);
        temp = temp->pre;
    }
}
void insert(int x,int choice)
{
    //printf("Enter the posi : ");
    //int x;
    temp = head;
        new_node = (node *) malloc (sizeof(node));
        printf("Enter the new data : ");
        scanf("%d",&new_node->data);


    if (x==1)
    {

        new_node->pre = 0;
        temp->pre = new_node;
        new_node->next = temp;
        head = new_node;

    }
    else if(x=choice+1)
    {
        temp = head;
        while (temp!=0)
        {
            temp = temp->next;
        }
        tail->next = new_node;
        new_node->pre = tail;
        tail= new_node;
        new_node->next = NULL;
    }

    else
    {
        int i=1;
        temp = head;
        while(i<x-1)
        {
            temp = temp->next;
            i++;
        }

        new_node->next = temp->next;
        new_node->pre = temp;
        temp->next = new_node;
        temp = new_node->next;
        temp->pre = new_node;
        //tail = temp;
    }
}
void main()
{
    int num;
    printf("Enter data : ");
    scanf("%d",&num);
    creat(num);
    print();
    reverse();
    int posi;
    printf("Enter the posi : ");
    scanf("%d",&posi);
    insert(posi,num);
    print();
    reverse();
}
