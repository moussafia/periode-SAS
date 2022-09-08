#include <stdio.h>
#include <stdlib.h>
int main()
{//test
    puts("\n\n                Challenge 5 : Affichage Temperature \n\n\n");
float F,c;
printf("donner la température en Fahrenheit : ");
scanf("%f",&F);
printf("\n\n la transforme de la température en degre Celsius est : %f degre Celsius \n", c = (F-32)/1.8);
if (30<=c && c<40)
printf("chaud");
if (c>=40)
printf("tres chaud");
if (20<=c && c<=30)
printf("froid");
if (c<20)
printf("tres froid");}

