#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{puts("\n\n        Challenge 5 : Equation deuxième degré  \n\n");
int a,b,c;
float d,r1,r2;
printf("                  donner l'equation ecrit par a*X^2+b*X+C=0 \n\n");
printf("  donner la valeur entier : a=");
scanf("%d",&a);
printf("  donner la valeur entier : b=");
scanf("%d",&b);
printf("  donner la valeur entier : c=");
scanf("%d",&c);
d=pow(b,2)-4*a*c;
if(d>0)
{printf("il ya deux solutions reel sont X1=%f       et          X2=%f",(-b+sqrt(d))/(2*a),(-b-sqrt(d))/(2*a));}
else if(d==0)
{printf("la solutions reel est double       X=%f",-b/(2*a));}
if(d<0)
{r1=-b/(2*a);
r2=sqrt(-d)/(2*a);
printf("il ya deux solutions complexe conjuger      X=%f+i*%f",r1,r2);}
}
