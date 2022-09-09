#include <stdio.h>
#include <stdlib.h>
int main()
{puts("\n\n        Challenge 12  \n\n");
float x1,x2,y1,y2,x,y;
float a,b;
printf("\n\n            donner les extremité de la droite (x1,y1) et   (x2,y2)        \n\n ");
printf("   donner le 1 er sous forme (x1,y1) :");
scanf("%f%f",&x1,&y1);
printf(" \n\n  donner le 1er sous forme (x2,y2) :");
scanf("%f%f",&x2,&y2);
if(x1!=x2)
{a=(y1-y2)/(x1-x2);
b=y1-a*x1;
printf("\n\n donc l'equation de la droite est s'ecrit sous forme Y=%f*X+%f     ",a,b);
}
printf("\n\n donner les coordonner d'un point M(x,y):");
scanf("%f%f",&x,&y);
if (y=a*x+b)
printf("\n\n  M apartient a ce droite  ");
else
printf("\n\n  M n''apartient pas a ce droite  ");}

