#include<stdio.h>
int main()
{
    int size;
    printf("The size of array is : ");
    scanf("%d",&size);
    int ar[size];

    printf("\nThe values are : ");

    for (int i=0;i<size; i++)
    {
        scanf("%d",&ar[i]);
    }
    int posi,value;
    printf("The posi and the value is :");
    scanf("%d%d",&posi,&value);
    /*for (int i=posi-1;i<size;i++)
    {
        ar[i-1]==ar[i];
    }*/
    int x = ar[posi-1];
    ar[posi-1]=value;
    printf("The final array is : ");

    for(int i=0;i<size;i++)
    {
        printf("%d ",ar[i]);
    }
    printf("\nThe changing value is : %d",x);
}
