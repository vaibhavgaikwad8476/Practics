#include<stdio.h>

int x = 51;

void Demo()
{
    int i = 21;
    printf("Inside Demo value of local i is %d\n",i);
    printf("Inside Demo value of global x is %d\n",x);
}

void Hello()
{
    int j = 11;
    printf("Inside Hello value of local j is %d\n",j);
    printf("Inside Hello value of global x is %d\n",x);
    // printf("%d",i);
}

int main()
{
    printf("Value of global x inside main is : %d\n",x);
    
    Demo();
    Hello();

    return 0;
}