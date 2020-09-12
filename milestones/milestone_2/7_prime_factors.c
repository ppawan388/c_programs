#include <stdio.h>

int main()
{
	int x;
	int i,a;
	printf("Enter any no.\n");
	scanf("%d",&x);
	for(i=2;i<=9;i++)
	{
		while(x%i==0)
		{
			printf("%d\t",i);
			x=x/i;
		}
	}
	
	return 0;
}