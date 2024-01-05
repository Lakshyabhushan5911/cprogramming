#include<stdio.h>
int fun(int arr[])
{
    int i;
    for(i=0;i<5;i++)
    {
        arr[i]=arr[i]+10;
    }
}
 void main()
 {
    int arr[5],i;
    for(i=0;i<5;i++)
    {
        printf("enter the array elements arr[%d]",i);
        scanf("%d",arr[i]);
    }
 
      printf("printing the entire array...................");
      fun(arr);
      for(i=0;i<5;i++)
     {
       printf("after function call a[%d]:%d",i,arr[i]);
     }
}