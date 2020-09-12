#include <stdio.h>
#include "my_math.h"
int main()
{
	int n;
	int i;
	printf("Enter any no.\n");
	scanf("%d",&n);
	i = prime(n);
	printf("%d",i);
 	return 0;
}