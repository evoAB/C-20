#include <stdio.h>
#include <stdlib.h>

int main()
{
    char c[20];
    printf("Enter a string : ");
    gets(c);
    char *p;
    p=c;
    int vowel=0,consonant=0;
    for(int i=0;*(p+i);i++)
        if(*(p+i)=='a'||*(p+i)=='A'||*(p+i)=='e'||*(p+i)=='E'||*(p+i)=='i'||*(p+i)=='I'||*(p+i)=='o'||*(p+i)=='O'||*(p+i)=='u'||*(p+i)=='U')
            vowel++;
        else
            consonant++;
    printf("Vowels : %d\nConsonants : %d",vowel,consonant);
    return 0;
}
