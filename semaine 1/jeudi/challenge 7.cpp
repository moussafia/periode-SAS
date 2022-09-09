#include<stdio.h>
#include<stdlib.h>
int main()
{puts("     \n\n      Challenge 7 :              \n\n");
float note;
printf("      doner la note    :  ");
scanf("%f",&note);
if (note<10)
printf("       \n\n  vous ete radoublee ");
else if (note>=10 && note<12)
printf("       \n\n  passable ");
else if (note>=12 && note<14)
printf("       \n\n  ASSEZ BIEN ");
else if (note>=14 && note<16)
printf("       \n\n  BIEN ");
else if (note>=16 && note<18)
printf("       \n\n  TRES BIEN ");
else if (note>=18)
printf("       \n\n  EXCELLENT ");
}
