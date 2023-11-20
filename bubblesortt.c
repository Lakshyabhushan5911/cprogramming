#include<stdio.h>
void bubblesort(int array[],int n)
{
    int i,j,temp;
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1;j++)
        {
            if(array[j]>array[j+1])
            {
                temp=array[j];
                array[j]=array[j+1];
                array[j+1]=temp;
            }
        }
    }
}
int main()
{
    int no,i;
    printf("enter the total no of elements:");
    scanf("%d",&no);
    printf("enter the elements in array");
    int a[no];
    for(i=0;i<no;i++)
    {
        scanf("%d",&a[i]);
        printf("sorted array:\n");
        for(i=0;i<no;i++)
        {
            printf("%d",a[i]);
        }
    }
}