#include <stdio.h>
#include "my_math.h"
int main()
{
	double FV, PV, a;
	unsigned int np,rate;
	printf("Enter the rate of interest: ");
	scanf("%u",&rate);
	printf("Enter the Future Value: ");
	scanf("%lf",&FV);
	printf("Enter the no. of periods: ");
	scanf ("%u",&np);
	a= power(1+rate,np);
	PV = FV/a;
	printf("Present value is %.2lf",PV);
	return 0;
	
}