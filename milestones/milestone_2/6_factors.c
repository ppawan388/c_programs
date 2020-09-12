#include <stdio.h>

int factors(int number)
{
	int factor;
	for(factor=1;factor<=number;factor++)
	{
		if(number%factor==0)
		{
			printf("%d\t",factor);
		}
	}

}
void main()
{
	int number;
	
	printf("Enter any no.\n");
	scanf("%d",&number);
	factors(number);
}