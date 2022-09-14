#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>


bool isprime(int a)
{
	int i=2;
	while(i<a)
	{
		
		if (a%i==0)
		return false;
		i++;
		
	}
	return true;
}


int main()
{
	int a;
	printf("\n a= ");
	scanf("%d",&a);
	if(isprime(a))
		printf("is prime");
	else 
	printf("is not prime");
		
}
