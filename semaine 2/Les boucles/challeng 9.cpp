#include<stdio.h>
#include<stdlib.h>
int main()
{int a,n,x,i;
printf(" a= ");
scanf("%d",&a);
printf(" \n n= ");
scanf("%d",&n);
x=1;
i=0;
while((n>0) && (a>0)&(i<n))
{x*=a;
i++;}

printf("\n %d^%d= %d",a,n,x);
}
