#include<stdio.h> 
  
int fact(int n) 
{ 
    if (n <= 1) 
        return 1; 
    return n*fact(n-1); 
} 
  
int nPr(int n, int r) 
{ 
    return fact(n)/fact(n-r); 
} 
  
int main() 
{ 
    int n, r; 
    printf("ENTER THE VALUE OF n: "); 
    scanf("%d", &n); 
    printf("ENTER THE VALUE OF r: "); 
    scanf("%d", &r); 
    printf("**********************************************\nTHE VALUE OF %dP%d IS %d", n, r, nPr(n, r)); 
    return 0; 
}
