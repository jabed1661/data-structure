#include<stdio.h>
int  main()
{
    int ar[50], num;
    scanf("%d",&num);
    for (int i=0;i<num;i++)
    {
        scanf("%d",&ar[i]);
    }
    int posi,num1;
    scanf("%d%d",&posi,&num1);

    /*  for (int i= num-1; i>=posi-1;i--)
     {
        ar[i+1]=ar[i];
     }*/

      ar[num]=ar[posi-1];
     ar[posi-1]=num1;
     num++;

     for (int i=0;i<num;i++)
     {
        printf("%d ",ar[i]);
     }

}

