#include <stdio.h>

int main()
{
	int a,b,g,i;
	printf("Enter two nos.: \n");
	scanf("%d%d",&a,&b);
	for(i=2;i<=a && i<=b;i++)
	{
		if(a%i==0 && b%i==0)
			g=i;
	}
	printf("GCD of %d and %d is %d",a,b,g);
	return 0;
}