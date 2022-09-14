#include<stdio.h>
#include<stdlib.h>
int add(int a,int b)
{return a+b;}
int main()
{int a,b;
printf("\n a= ");
scanf("%d",&a);
printf("\n b= ");
scanf("%d",&b);
printf("\n %d+%d=%d ",a,b,add(a,b));
}
