#include<stdio.h>
int main ()
{
    int b=10;
    int ar[]={6,2,1,5,3};
    int *p;
    p=ar;
    //p=b;
    printf("%d\n",ar);
    printf("%d\n",p);
    printf("%d\n",&p);
    p++;

    //printf("%d\n",ar[2]);
    printf("%d\n",ar[2]);
    // if ar[i]=*(a+i)
       // a[i]=i[a];
        //and (q+i)=(i+q)=i[q];
    printf("%d\n",2[ar] );
    printf("%d\n", *(p+1) );
    printf("%d\n",&p);
    printf("%d\n",&ar[2]);
    //p++;
    int arr[5];
    int *x=arr;
    for (int i=0 ; i<5;i++)
    {
        scanf("%d",&arr[i]);
    }
    for (int i=0;i<5;i++)
    {
        // printf("%d",(x+i));
        printf("%d ", arr[i]);
        printf("%d ",(x+i));
    }

}
