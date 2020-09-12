#include "math.h"

unsigned int power(unsigned int x, unsigned int n)
{
	int i,result=1;
	for(i=0;i<n;i++)
	{
		result=result*x;
	}
	return (result);
}

int prime(int x)
{
	int i;
	for(i=2;i<x;i++)
	{
		if(x%i==0)
		{
			break;
		}
	}
	if(i==x)
	{
		return (1);
	}
	else
		return (0);
}

int factorial(int n)
{
	int i,fact=1;
	for(i=2;i<=n;i++)
	{
		fact=fact*i;
	}
	return (fact);
}