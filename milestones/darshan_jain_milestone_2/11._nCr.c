#include <stdio.h>
 
int fact(int n)
{
    int i,f=1;
    for(i=1;i<=n;i++)
    {
        f=f*i;
    }
    return f;
}
 
void main()
{
 int n,r,ncr;
 
  	printf("enter n : ");
  	scanf("%d",&n);
    printf("enter r : ");
  	scanf("%d",&r);
  	ncr=fact(n)/(fact(r)*fact(n-r));
    printf("**********************************************************\nVALUE OF %dC%d = %d\n",n,r,ncr);
}
 
