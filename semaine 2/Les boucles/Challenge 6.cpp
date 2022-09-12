#include<stdio.h>
#include<stdlib.h>
int main()
{puts(" \n\n        Challenge 6 :        \n\n");
int n,j,i,p;
printf("donner le nombre n : ");
scanf("%d",&n);
for(i=2;i<=n;i++)
{p=1;
for(j=2;j<i;j++)
{if (i%j==0)
p=0;}
if(p)
printf("\n %d ",i);
}}
