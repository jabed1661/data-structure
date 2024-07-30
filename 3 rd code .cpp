#include<iostream>
#include<conio.h>
using namespace std;
int main()

{
    int num;
    int posi,item;
    cout<< "The size of the number is : ";

    cin>>num;
    int ar[num];
    cout<<"The array is : ";
    for (int i=0;i<num;i++)
    {
        cin>>ar[i];
    }
    cout<<"enter the position : ";
    cin>>posi;
    if (posi<=0 || posi > num)
    {
        cout<<"Invalid";
    }
    else
    {
        item =ar[posi-1];
    for (int i= posi-1;i<num-1;i++)
    {
        ar[i]=ar[i+1];
    }
    num--;
    cout<<"The final array is :";
    for (int i=0 ;i<num;i++)
    {
        cout<<ar[i]<<" ";
    }
    }
     cout<<"\nthe missing number is : "<<item;



    getch();
}
