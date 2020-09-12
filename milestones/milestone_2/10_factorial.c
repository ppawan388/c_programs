#include <stdio.h>
#include "my_math.h"
int main()
{
	int n;
	int fact;
	printf("Enter any no.\n");
	scanf("%d",&n);
	fact = factorial(n);
	printf("factorial of %d is %d",n,fact);
	
	return 0;
}