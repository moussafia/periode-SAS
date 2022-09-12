#include<stdio.h>
#include<stdlib.h>
int main()
{puts(" \n\n          Challenge 1: table de multiplication          \n\n");

int a,i;
printf("          donner un nombre :   ");
scanf("%d",&a);
for(i=1;i<11;i++)
{printf("\n           %d*%d=%d",a,i,a*i);
}
}
