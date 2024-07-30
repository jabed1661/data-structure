
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

    for (int i=num-1;i>=posi-1;i--)
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
