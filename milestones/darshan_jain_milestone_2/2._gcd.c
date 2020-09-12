#include <stdio.h>

void main()
{
	int a,b,gcd,i;

	printf("ENTER THE 2 NUMBERS : ");

	scanf("%d %d",&a,&b);

	for(i=2;i<=a && i<=b;i++)
	{
		if(a%i==0 && b%i==0)
			 
			 gcd=i;
	}

	printf("\nGCD of %d AND %d IS : %d",a,b,gcd);
	
}
