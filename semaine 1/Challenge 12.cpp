#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{puts("\n\n               Challenge 12 : Nombre entier à trois chiffres en ordre inverse \n\n\n");
int x,a,b,c;
printf("          donner la valeur : ");
scanf("%d",&x);
a=x/100;
b=x%100;
b=b/10;
c=x%10;
printf("         nombre inverser est : %d%d%d",c,b,a);
}
