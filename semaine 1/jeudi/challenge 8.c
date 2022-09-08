#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int main()
{
    puts("\n\n        Challenge 8  \n\n");
char a;
 printf("      donner le caractere      :  ");
 scanf("%c",&a);
 if (isalpha(a))
 {
if (islower(a))
    printf("\n\n  il fait partie des alphabets et minuscule  \n\n");
else if (isupper(a))
printf("\n\n   il fait partie des alphabets et majuscule \n\n");
 }
    else printf("\n\n    il n'est fait partie des alphabets \n\n");
}
