
#include <stdio.h>

int factors(int number)
{
	int factor;
	printf("THE FACTORS ARE : \n");
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
	printf("ENTER ANY NUMBER : ");
	scanf("%d",&number);
	factors(number);
}
