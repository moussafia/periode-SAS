#include<stdio.h>
#include<stdlib.h>
int echanger(int a,int b)
{printf("\n a=%d        &          b=%d",a,b);
printf("\n\n\n a=%d        &          b=%d",b,a);
return 0;}
int main()
{int a,b;
printf("\n a= ");
scanf("%d",&a);
printf("\n b= ");
scanf("%d",&b);
echanger(a,b);
}
