#include <stdio.h>

int main()
{
	int a,b,c,i,lcm;
	printf("Enter three nos.:\n ");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b && a>c)
	{
		for(i=1;i<=100;i++)
		{
			lcm=a*i;
			if(lcm%b==0 && lcm%c==0)
			{
				printf("LCM of %d, %d and %d is %d",a,b,c,lcm);
				break;
			}
				
				
		}
	}
	if(b>a && b>c)
	{
		for(i=1;i<=9;i++)
		{
			lcm=b*i;
			if(lcm%a==0 && lcm%c==0)
			{
				printf("LCM of %d, %d and %d is %d",a,b,c,lcm);
				break;
			}
		}
	}
	if(c>b && c>a)
	{
		for(i=1;i<=9;i++)
		{
			lcm=c*i;
			if(lcm%a==0 && lcm%b==0)
			{
				printf("LCM of %d, %d and %d is %d",a,b,c,lcm);
				break;
			}
		}
	}
	
	return 0;
}