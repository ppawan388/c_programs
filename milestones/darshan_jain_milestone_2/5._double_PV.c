#include<stdio.h>
#include<math.h>
double FV(int rate,int nperiods,int fv)
{
     double p;
   double prsnt;
   rate=rate+1;

   p = pow(rate,nperiods);
   prsnt = fv/p;

    printf("present value:%f",prsnt);

}
void main()
{
    
   int fv;
  int nperiods=0;
   int rate=0;
   scanf("%d%d%d",&rate,&fv,&nperiods);
   FV( rate,nperiods,fv);
}
