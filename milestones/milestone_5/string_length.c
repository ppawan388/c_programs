#include<stdio.h>
int string_length(char *str)
{
    //char str[]=*str;
    //printf("%s",str);
   int count =0;
   int i=0;
   while (str[i]!='\0')
   {
       count=count+1;
       i++;

   }
    //printf("%d",count);*/
  // if(count==0){
    //   return -1;
  // }
   if(count>=1)
   {
       return count;
   }
   else 
   return -1;
   
   //return count;
}

int main()
{
   
    char str[]="";
    printf("enter the string");
    scanf("%s",str);
    int length =string_length(str);
    printf("%d k",length);
    return 0;
}