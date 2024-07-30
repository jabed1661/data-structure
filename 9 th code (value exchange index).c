
#include<stdio.h>
int main()
{
    //int i,j;

    int num;
    printf("Enter the size of array is : ");
    scanf("%d",&num);
    int ar[num];
    printf("Enter the number of array is : ");
    for (int i=0;i<num;i++)
    {
        scanf("%d",&ar[i]);
    }
    int posi,value;
    printf("Enter the posi and value : ");
    scanf("%d%d",&posi,&value);
    ar[num]=ar[posi-1];
    ar[posi-1]=value;
    num++;

    printf("The final list of array is : ");
    for (int i=0;i<num;i++)
    {
        printf("%d ",ar[i]);
    }
}

