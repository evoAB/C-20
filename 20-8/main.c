#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[10];
    printf("Enter 5 number in an array : ");
    for(int i=0;i<5;i++)
        scanf("%d",&a[i]);
    int *ptr=a;
    int sum=0;
    for(int i=0;i<5;i++)
        sum+=*(ptr+i);
    printf("Sum of numbers in array : %d",sum);
    return 0;
}
