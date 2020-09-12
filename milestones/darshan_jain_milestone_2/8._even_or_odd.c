#include <stdio.h>

int Even(int num)
{
    int a=!(num & 1);
    //printf("%d",a);
    return a;
}
int main()
{
    int num;
    printf("ENTER ANY NUMBER :  ");
    scanf("%d", &num);
    if(Even(num))
    {
        printf("THE NUMBER IS EVEN ...!!!!");
    }
    else
    {
        printf("THE NUMBER IS ODD ...!!!!");
    }
    
    return 0;
}
