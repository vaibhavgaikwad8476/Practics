#include<stdio.h>

int main()
{
    char Arr[] = {'H','e','l','l','o','\0'};

    char Brr[6] = {'H','e','l','l','o','\0'};
    
    char Crr[] = "Hello";

    printf("%s\n",Arr);
    printf("%s\n",Brr);
    printf("%s\n",Crr);
    

    return 0;
}