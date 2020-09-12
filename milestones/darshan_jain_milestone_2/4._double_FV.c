#include<stdio.h>
#include<math.h>
double FV(int rate,int nperiods,int prsnt)
{
   double p;
   double fv;
   rate=rate+1;
   p = pow(rate,nperiods);
   fv = p*prsnt;
   printf("******************************************\nTHE FUTURE VALUE IS : %f",fv);

}

void main()
{
    double p=0;
   double fv=0;
   int prsnt;
  int nperiods=0;
   int rate=0;
   printf("ENTER THE PRESENT VALUE :  ");
   scanf("%d",&prsnt);
   printf("ENTER THE RATE OF INTEREST : ");
   scanf("%d",&rate);
   printf("ENTER THE TIME PERIOD : ");
   scanf("%d",&nperiods);
   
   FV( rate,nperiods,prsnt);
   
}
