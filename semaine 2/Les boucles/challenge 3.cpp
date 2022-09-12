#include<stdio.h>
#include<stdlib.h>
int main()
{puts(" \n\n         Challenge 3 :        \n\n");

int n,i,a;
printf("          donner un nombre :   ");
scanf("%d",&n);
a=0;
i=2;
while((i<n ) && (n%i==0))
{a++;
i++;}
if(a!=0)
printf("le nombre n'est pas premier");
else if (a==0)
printf("le nombre est premier");
}
