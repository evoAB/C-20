#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;
    printf("Enter 2 numbers : ");
    scanf("%d%d",&a,&b);
    int *p=&a;
    int *q=&b;
    if(*p>*q)
        printf("Maximum number = %d",*p);
    else
        printf("Maximum number = %d",*q);
    return 0;
}
