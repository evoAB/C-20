#include <stdio.h>
#include <stdlib.h>
void swapS(char **,char **);
int main()
{
    char *c1[20],*c2[20];
    printf("Enter 2 strings : ");
    gets(c1);
    gets(c2);
    swapS(&c1,&c2);
    printf("Swapped strings : \n");
    printf("c1 = %s\nc2 = %s",c1,c2);
    return 0;
}
void swapS(char **s1,char **s2)
{
    char *temp=*s1;
    *s1=*s2;
    *s2=temp;
}
