#include <stdio.h>
#include <stdlib.h>
void sort(int *,int);
int main()
{
    int a[5];
    printf("Enter 5 elements in array : ");
    for(int i=0;i<5;i++)
        scanf("%d",&a[i]);
    sort(a,5);
    printf("Sorted elements = ");
    for(int i=0;i<5;i++)
        printf("%d ",a[i]);
    return 0;
}
void sort(int *ptr,int size)
{
    for(int i=0;i<size-1;i++)
        for(int j=i+1;j<size;j++)
            if(*(ptr+i)>*(ptr+j))
            {
                int temp=*(ptr+i);
                *(ptr+i)=*(ptr+j);
                *(ptr+j)=temp;
            }
}
