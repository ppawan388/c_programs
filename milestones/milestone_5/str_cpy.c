#include<stdio.h>
int string_copy(char *str1, char *str2) 
{ 
    int i=0;
 while(str2[i]!='\0')
 {
  str1[i]=str2[i];
 
   i = i+1;
 }
  str2[i]='\0';
  str1[i]='\0';

 if(*str2!=*str1){
 return -1;
 }
 else if(*str2==*str1)
 {
     return 1;
 }
 
}
int main()
{

  char str1[100];
  char str2[100];
  //printf("%s",str1);
  printf("enter the str2\n");
  scanf("%s",str2);
 // printf("\n%s",str1);
 // printf("%s",str2);
int copy=string_copy(str1,str2);
 printf("%d",copy);
  return 0;
}
