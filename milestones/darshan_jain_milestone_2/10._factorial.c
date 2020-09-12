#include<stdio.h>

unsigned int factorial(unsigned int);
 
void main()
{
   unsigned int number;
   unsigned int fact = 1;
   printf("enter the number : ");
   scanf("%u",&number);
   printf("**********************************************************\n factorial :\n%u! = %u\n", number, factorial(number));
}
unsigned int factorial(unsigned int n)
{
   unsigned int c;
   unsigned int result = 1;
 
   for( c = 1 ; c <= n ; c++ )
         result = result*c;
 
   return ( result );
}
 

