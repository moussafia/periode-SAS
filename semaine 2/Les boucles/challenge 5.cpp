#include<stdio.h>
#include<stdlib.h>
int main()
{puts(" \n\n          Challenge 5:        \n\n");

int n,a,r,q,inv;
printf("          donner le nombre :   ");
scanf("%d",&a);
inv=0;
n=0;
q=a;
while(q!=0)
{r=q%10;
n++;
inv=inv*10;
inv=inv+r;
q=q/10;
}
printf("    \n %d ",inv);}
