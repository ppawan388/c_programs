#include <stdio.h>

int main()
{
	int n,a=1 ,b=1 ,c ,i;
	printf("Enter values for n: ");
	scanf("%d",&n);
	printf("Fibonacci series:\n");
	printf("%d\n%d\n",a,b);
	for(i=0;i<n-2;i++)
	{
		c=a+b;
		printf("%d\n",c);
		a=b;
		b=c;
	}
	return 0;
}