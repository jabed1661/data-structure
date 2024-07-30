#include<stdio.h>

void value_add(int ar[],int num,int posi,int value)
{
    for (int i =num-1;i>=posi - 1;i-- )
    {
        ar[i+1]=ar[i];
    }
    ar[posi-1]=value;
    num++;
    printf("The final list of array is : ");
    for (int i=0;i<num;i++)
    {
       printf("%d ",ar[i]);
    }

}

int main()
{
    int num;
    printf("Enter the size of array is : ");
    scanf("%d",&num);
    int ar[num];
    printf("The list of array is:\n");
    for (int i=0;i<num;i++)
    {
        printf("The %d value of array is : ",i+1);
        scanf("%d",&ar[i]);
    }
    int posi,value;
    printf ("Enter the position : ");
    scanf("%d",&posi);
    printf("Enter the value : ");
    scanf("%d",&value);
    value_add(ar,num,posi,value);
}

