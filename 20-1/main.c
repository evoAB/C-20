#include <stdio.h>
#include <stdlib.h>
void swapNumber(int*,int*);
int main()
{
    int a,b;
    printf("Enter two numbers : ");
    scanf("%d%d",&a,&b);
    swapNumber(&a,&b);
    printf("Swapped Numbers : %d &d",a,b);
    return 0;
}
void swapNumber(int *b)
