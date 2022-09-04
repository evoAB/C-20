#include <stdio.h>
#include <stdlib.h>

int main()
{
    char c[20];
    printf("Enter a string : ");
    gets(c);
    int l=strlen(c);
    char *ptr=c;
    printf("Reversed String : ");
    for(int i=0;i<l;i++)
        printf("%c",*(ptr+l-i-1));

    return 0;
}
