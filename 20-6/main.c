#include <stdio.h>
#include <stdlib.h>

int main()
{
    char c[20];
    printf("Enter a string : ");
    gets(c);
    char *p;
    p=c;
    int count=0;
    for(int i=0;*(p+i);i++)
        count++;
    printf("Length of string : %d",count);
    return 0;
}
