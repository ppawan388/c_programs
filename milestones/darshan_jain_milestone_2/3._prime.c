#include <stdio.h> 
#include<math.h> 

int is_prime(unsigned int x)

{ 
    
	int  i, flag = 1;   
    for (i = 2; i <= sqrt(x); i++) 
	{ 
        if (x % i == 0) { 
            flag = 0; 
            break; 
        } 
    } 
  
    if(x<=1) 
    flag=0; 
    else if(x==2) 
    flag=1;  
  
    if (flag == 1) 
	{ 
       printf("THE NUMBER IS PRIME");
    } 
    
	else 
	{ 
       printf("THE NUMBER IS NOT PRIME.");
    } 
}
  
  int main()
 { 
   unsigned int x;
   printf("ENTER THE NUMBER : ");
   scanf("%u",&x);
   is_prime(x);
   return 0;
   
 }
