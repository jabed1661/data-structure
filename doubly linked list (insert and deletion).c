#include<stdio.h>
#include<stdlib.h>

typedef struct f1 node;
struct f1
{
    int data;
    node *pre;
    node *next;
};

node *head,*temp,*tail,*new_node;

void creat(int size)
{
    head = 0;
    while (size--)
   {
        new_node = (node*) malloc(sizeof(node));
        printf("Enter the data : ");
        scanf("%d",&new_node->data);
        new_node->next = 0;
        new_node->pre = 0;
        if (head == NULL)
        {
            head = temp = new_node;
            tail = temp;
        }
        else
        {
            temp->next = new_node;
            new_node->pre = temp;
            temp = new_node;
            tail  = temp;
        }
    }
}

void print()
{
    temp = head;
    printf("Enter the final list of array is : \n");
    while(temp!=0)
    {
        printf("%d ",temp->data);
        printf("%d \n",&temp->data);
        temp = temp->next;
    }
}

void reverse()
{
    temp = tail;
    printf("Enter the final list of array is : \n");
    while(temp!=0)
    {
        printf("%d ",temp->data);
        printf("%d \n",&temp->data);
        temp = temp->pre;
    }
}
void adding(int size)
{
    temp = head;
    int posi;
    printf("Enter the position : ");
    scanf("%d",&posi);
    printf("Enter the new node: ");
    new_node = (node*)malloc(sizeof(node));
    scanf("%d",&new_node->data);

  if (posi==1)

   {
      new_node->pre = 0;
      temp->pre= new_node;
      new_node->next = temp;
      head = new_node ;
   }
   else if (posi ==size+1)
   {
       temp = head;
       while(temp!=0)
       {
           temp = temp->next;
       }
       new_node->pre = tail;
       tail->next = new_node;

       tail = new_node;
       new_node->next = NULL;

   }
   else
   {
       temp = head;
       int i=1;
       while(i<posi-1)
       {
           temp = temp->next;
           i++;
       }
       new_node->next = temp->next;
       new_node->pre= temp;
       temp->next = new_node;
       temp = new_node->next;
       temp->pre = new_node;
   }
}
void delet(int size)
{
    int posi;
    node *previous;
    printf("Enter the position : ");
    scanf("%d", &posi);
  if (posi==1)
  {
    temp = head;
    head = temp->next;
    temp->next->pre=NULL;
    free(temp);
  }
  else if (posi == size+1)
  {
      if (tail==0)
      {
         printf("Undefined \n");
      }
      else
      {
          temp= tail;
          temp->pre->next = NULL;
          tail = tail->pre;
          free(temp);
      }
  }
      else
      {
          temp = head;
          int i=1;
          while(i<posi)
          {
              temp = temp->next;
              i++;
          }
          temp->pre->next = temp->next;
          temp->next->pre = temp->pre;
          free(temp);

      }
}

int main()
{
     int size;
    printf("Enter the size of array is : ");
    scanf("%d",&size);
    creat(size);
    print();
    reverse();
    adding(size);
    print();
    reverse();
    delet(size);
    print();
    reverse();
    return 0;
}5

