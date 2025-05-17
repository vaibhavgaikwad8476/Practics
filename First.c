#include<stdio.h>

int i = 11;

extern int j;

int main()
{
    printf("Value of i is : %d\n",i);

    printf("Value of j is : %d\n",j);

    return 0;
}