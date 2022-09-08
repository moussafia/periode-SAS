#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{puts("\n\n                Challenge 9 : Distance entre deux points \n\n\n");
float y1,y2,x1,x2;
printf("          donner l'abscisse  de M : ");
scanf("%f",&x1);
printf("          donner le coordonner de M : ");
scanf("%f",&y1);
printf("          donner l'abscisse  de N : ");
scanf("%f",&x2);
printf("          donner le coordonner de N : ");
scanf("%f",&y2);
printf("la distance entre M et N  est %f ",sqrt(pow(x1-x2,2)+pow(y1-y2,2)));

}

