#include<stdio.h>
#include<stdlib.h>
int main()
{puts(" \n\n        Challenge 7 :        \n\n");
int n,i;
int U0,U1,U;
printf("donner le nombre n : ");
scanf("%d",&n);
U0=1;
U1=1;
i=2;
while ((i>1) && (i<=n))
{U=U0+U1;
U0=U1;
U1=U;
i++;
}
printf(" \n %d",U);}
