#include<stdio.h>
#include<math.h>
double FV(int rate,int nperiods,int prsnt)
{
     double p;
   double fv;
   rate=rate+1;

   p = pow(rate,nperiods);
   fv = p*prsnt;

    printf("%f",fv);

}
void main()
{
    double p=0;
   double fv=0;
   int prsnt;
  int nperiods=0;
   int rate=0;
   scanf("%d%d%d",&rate,&prsnt,&nperiods);
   FV( rate,nperiods,prsnt);
}
