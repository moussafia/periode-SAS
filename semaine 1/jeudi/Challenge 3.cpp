#include <stdio.h>
#include <stdlib.h>
int main()
{puts("\n\n        Challenge 2 : Paire ou Impaire \n\n");
int a,b,c;
printf(" donner la valeur entier : a=");
scanf("%d",&a);
printf(" donner la valeur entier : b=");
scanf("%d",&b);
if(a!=b || a<b)
{c=a;
a=b;
b=c;
}
printf(" donner la valeur entier : a=%d",a);
printf(" donner la valeur entier : b=%d",b);
}
