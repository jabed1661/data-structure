#include<stdio.h>
int main ()
{
    int num;

    scanf("%d",&num);
    int ar[num];
    printf("Enter the number : ");
    for (int i=0;i<num;i++)
    {
        scanf("%d",&ar[i]);
    }
    int first=0 ,last=num-1;
    int digit;
    printf("The digit is :");
    scanf("%d",&digit);
    int count=0;

    while (first <=last)
    {
        int mid =(first+last)/2;
        if (ar[mid]== digit)
        {
            printf("%d is the position of %d",digit,mid+1);
            count++;
            break;
        }


        if (ar[mid]<digit)
        {
            first = mid+1;
        }
        else if (ar[mid]>digit)
        {
            last= mid-1;
        }}
        if (count ==0)
        {
            printf("Not found");
        }



}
