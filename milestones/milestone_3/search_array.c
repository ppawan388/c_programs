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
void search(int a[],int element,int n)
{
     int count;
   if(element==a[n/2])
   {
       printf("yes it exists");
    }
    if(element<a[n/2])
    {  count = n/2;
        for(int i=0;i<n/2;i++)
        {
            if(a[i]==element)
            {
                printf("yes it exists");  
                break;
            }
            count=count-1;
             if(count==0){
              printf("element dont exist");
           }
        }
    } 

    
    if(element>a[n/2])
    {    count=n/2;
      for(int i=(n/2)+1;i<n;i++)
        {
            if(a[i]==element)
            {
                printf("yes it exists");  
                break;
            }
             count=count-1;
             if(count==0){
              printf("element dont exist");
           }
        }    
    }
} 


int main()
{ int n,element;
    printf("how many elements are there in a set");
     scanf("%d",&n);
     int a[n];
     printf("enter the integers");
     for(int i=0;i<n;i++){
         scanf("%d",&a[i]);

     }  
      sorted_array(a, n);
        printf("enter the element to search");
     scanf("%d",&element);
     search(a,element,n);
     return 0;
}