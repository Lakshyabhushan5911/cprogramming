#include<stdio.h>
void main()
{
    float r;
    printf("entre the radius: ");
    scanf("%f",&r);
    float area,peri;
    area=3.14*r*r;
    peri=2*3.14*r;
    printf("area of circle=%f\n",area);  
    printf("perimetre of circle=%f\n",peri);
    int s;
    printf("enter the side of square:");
    scanf("%d",&s);
    area=s*s;
    peri=4*s;
    printf("area of square%d\n",area);
    printf("perimeter of square%d\n",peri);
    int l,w;
    printf("enter the length:");
    scanf("%d",&l);
    printf("enter the width:");
    scanf("%d",&w);
    area=l*w;
    peri=2*(l+w);
    printf("area of rect%f\n",area);
    printf("perimeter of rect%f\n",peri);
}