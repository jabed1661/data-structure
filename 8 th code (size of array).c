
#include<stdio.h>
int  main()
{
    int num;
    //scanf("%d",&num);
    int arr[]={10,5,6};
    int size = sizeof(arr)/sizeof arr[0];
    //int sizea = sizeof arr[0];
    printf("%d\n",size);
   // printf("%d\n",sizea);
    for(int i=0;i<3;i++)
    {
        printf("%d ",arr[i]);
    }
}
