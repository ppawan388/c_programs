#include<stdio.h>
void sorted_array(int a[],int n){

 int temp=0; 
 for(int i=0;i<n;i++)
{
  for(int j=0;j<n;j++)
{
   if(a[j]>=a[j+1]){
  temp = a[j];
  a[j]=a[j+1];
  a[j+1] = temp;}
}
}
}
void print_array(int choice,int a[],int n){
  if(choice==1) {
    for(int i=n-1;i>=0;i--)
    {
      printf("%d ",a[i]);
    }
  }
  else if(choice==0){
   for(int i=0;i<n;i++)
   {
    printf("%d ",a[i]);
   
   }
  }
}

int main(void)
{ 
 
   
int choice;
  printf("enter number of integers to be sorted: ");
   int n;
  scanf("%d",&n);
  int a[n];
 
  printf("enter the integers: ");
 for(int i=0;i<n;i++)
{
  scanf("%d",&a[i]);
}
 sorted_array(a,n);

 printf("\n 0:ascending order : \n 1:descending order :");
scanf("%d",&choice);
print_array(choice,a,n);
printf("\n done");
return 0;
}






  