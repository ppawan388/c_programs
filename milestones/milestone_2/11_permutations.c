#include <stdio.h>
#include "my_math.h"
int main()
{
	int n,r;
	float per;
	printf("Enter values for n and r :\n");
	scanf("%d%d",&n,&r);
	per=factorial(n)/factorial(n-r);
	printf("Permutation = %.2f",per);
	return 0;
}