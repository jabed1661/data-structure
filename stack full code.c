#include<stdio.h>

#define N 5
int stact [N];
int top=-1;

void push()
{
    int x;
    printf("Enter the size : ");
    scanf("%d",&x);
    if (x==top-1)
    {
        printf("Over flow");
    }
    else{
    for (int i=1;i<=x;i++)
    {
        printf("Enter the data : ");
        scanf("%d",&stact[i]);
        top++;
        stact[top]=stact[i];

    }}
}
void pop()
{
    int digit;
    digit = stact[top];
    if (top==-1)
    {
        printf("Undefined\n");
    }
    else{
        printf("The pop value is : ");
    printf("%d\n",digit);
     top--;
     }
}
void display()
{
    for(int i=top;i>=0;i--)
    {
        printf("%d ",stact[i]);

    }
}
int main()
{
    int ch;
   do{
   printf("\nEnter choice : \n1:Push\n2: Pop\n3:Display\n");
   scanf("%d",&ch);
   switch(ch)
   {
       case 1: push();
       break;
       case 2: pop();
       break;
       case 3: display();
       break;
       default: printf("Invalid");

   }
   }while(ch!=0);
    return 0;
}


