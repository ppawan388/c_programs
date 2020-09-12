#include <stdio.h>
#include "my_math.h"

int main(){
    unsigned int p, number, result; 
    
	
    printf("please enter a number: ");
    scanf("%u", &number);
	printf("please enter the power: ");
    scanf("%u", &p);
    result = power(number, p);
    
	
    
    printf("%d to the power %d is %d",number,p,result);
    
    
    return 0;
}