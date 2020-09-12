#include <stdio.h>
#include "my_math.h"
int main()
{
	double FV, PV, a;
	unsigned int np,rate;
	printf("Enter the rate of interest: ");
	scanf("%u",&rate);
	printf("Enter the Present Value: ");
	scanf("%lf",&PV);
	printf("Enter the no. of periods: ");
	scanf ("%u",&np);
	a= power(1+rate,np);
	FV = PV*a;
	printf("Future value is %.2lf",FV);
	return 0;
	
}