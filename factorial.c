#include<stdio.h>
void main()
{
    int no ,i;
    unsigned long long factorial=1;
    printf("enter the positive integer");
    scanf("%d",&no);
    if(no<0){
        printf("error:factorial is not defined for negative no\n");
    }else{ 
        for(i=1;i<=no;++i){
            factorial*=i;
        }
printf("factorial of %d=%llu\n",no,factorial);
    }
}