#include<stdio.h>
int main()
{
    int num;
    scanf("%d",&num);
    int arr[num];
    int temp=0;
    for(int i=0;i<num;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<=num;i++)
    {
        for(int j=i+1;j<num;j++)
        {
            if (arr[j]>arr[i])

            {
                temp = arr[j];
                arr[j]=arr[i];
                arr[i]= temp;

            }
        }}
        for(int i=0;i<num;i++){
        printf("%d \n",arr[i]);}
}
