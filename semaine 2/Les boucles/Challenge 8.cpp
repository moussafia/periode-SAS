#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{puts("\n\n           l'équation x^3+12*x^2+1=0       ");
float c;
float a=-15;
float b=-10;
c=0;
while (abs(b-a)>0.00001)
{c=(a+b)/2;
if ((pow(c,3)+12*pow(c,2)+1)*(pow(a,3)+12*pow(a,2)+1)<0)
b=c;
else a=c;
}
printf(" X0=%f ",a);}
