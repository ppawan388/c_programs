#include <stdio.h> 
  
void Fibonacci(int n) 
{  
    printf("*********************************************\nTHE FIBONACCI SERIES UPTO %d IS : \n",n);
    int f1 = 0, f2 = 1, i; 
     if (n < 1) 
        return; 
    for (i = 1; i <= n; i++) 
    { 
        printf("%d ", f2); 
        int next = f1 + f2; 
        f1 = f2; 
        f2 = next; 
    } 
} 
int main() 
{   int n;
    printf("ENTER THE VALUE OF N :");
    scanf("%d",&n);
    Fibonacci(n); 
    return 0; 
} 

