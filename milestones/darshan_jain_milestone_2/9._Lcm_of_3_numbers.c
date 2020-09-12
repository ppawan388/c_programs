#include<stdio.h>

int lcm(int,int);

int main()
{
  int a,b,c,l,k;
  printf("ENTER ANY 3 INTERGERS :   ");
  scanf("%d%d%d",&a,&b,&c);
  if(a>b)
 {
   l = lcm(a,b);
 }

   else
 {
   l = lcm(b,a);
 }

  if(l>c)
 {
   k= lcm(l,c);
  }
    else
 { 
    k= lcm(c,l);
 }
    printf("*************************************************\nLCM OF THE 3 NUMBERS IS :  %d",k);
    return 0;

}

int lcm(int a,int b)
{

  int temp = a;
  while(1)
  {
     if(temp % b == 0 && temp % a == 0)
     break;
	 temp++;
  }
   return temp;

}
