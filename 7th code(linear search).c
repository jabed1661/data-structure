#include<stdio.h>
int main()
{
    int num;
    //scanf("%d",&num);
    int arr[]={2,3,5,7,5};
    int key;
    printf("Enter the value is:");
    scanf("%d",&key);
    int count=0;
     for(int i=0;i<5;i++)
     {
          if (arr[i]==key)
        {
          printf("%d is the position of %d\n",key,i+1);
             count++;
             //break;

        }}
        if (count==0)
        {
            printf("Not found");
            //break;
        }
        else
            (printf("\n%d occurs %d times",key,count));


}
