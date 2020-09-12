#include<stdio.h> 
  

int power(int x, unsigned int y) 
{ 
    if (y == 0) 
        return 1; 
    else if (y%2 == 0) 
        return power(x, y/2)*power(x, y/2); 
    else
        return x*power(x, y/2)*power(x, y/2); 
} 
  

int main() 
{ 
    int x ; 
    unsigned int y; 
    printf("ENTER THE VALUE OF X : ");
    scanf("%d",&x);
    printf("ENTER THE VALUE OF Y : ");
    scanf("%u",&y);
    printf("*******************************************\nTHE VALUE OF X^N : %d ^ %u = %d",x,y,power(x, y)); 
    return 0; 
} 
