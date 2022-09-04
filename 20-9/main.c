#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[5];
    printf("Enter 5 elements in an array : ");
    for(int i=0;i<5;i++)
        scanf("%d",&a[i]);
    int *ptr=a;
    printf("Reverse array : ");
    for(int i=0;i<5;i++)
        printf("%d ",*(ptr+4-i));
    return 0;
}
