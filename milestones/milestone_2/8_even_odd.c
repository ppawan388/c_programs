#include <stdio.h>

int main()
{
	int x;
	printf("Enter any no.\n");
	scanf("%d",&x);
	
	if(x%2==0)
		printf("%d is an even no.",x);
	else
		printf("%d is an odd no.",x);
	
	return 0;
}