#include<stdio.h>
#include<stdlib.h>
int main()
{puts(" \n\n          Challenge 2: pyramide d'etoile         \n\n");

int n,j,i,k;
printf("          donner un nombre :   ");
scanf("%d",&n);
for(i=0;i<n;i++)
{printf("\n                       ");
for(j=i;j<n;j++)
{printf(" ");}
for(k=0;k<=2*i;k++)
{printf("*");}}
}
