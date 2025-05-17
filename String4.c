#include<stdio.h>

int main()
{
    char Arr[] = "Hello";

    char *ptr = Arr;

    printf("%c\n",*ptr);

    ptr++;

    printf("%c\n",*ptr);

    ptr++;

    printf("%c\n",*ptr);

    return 0;
}