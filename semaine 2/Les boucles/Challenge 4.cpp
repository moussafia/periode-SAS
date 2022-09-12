#include<stdio.h>
#include<stdlib.h>
int main()
{puts(" \n\n          Challenge 4 :         \n\n");

int n,a,s,max,i;
printf("          donner le nombre maximal de cette serie :   ");
scanf("%d",&n);
max=0;
s=0;
for(i=0;i<n;i++)
{printf("\n  a%d= ",i);
scanf("%d",&a);
if((a>0) && (a<100))
{s=s+a;
if(max<a)
max=a;}
}
printf("      \n\nla somme de cette serie est %d : ",s);
printf("\n\n      le nombre maximale est %d",max);
}
