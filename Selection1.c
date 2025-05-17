#include<stdio.h>

int main()
{
    int Marks = 0;

    printf("Enter your marks : \n");
    scanf("%d",&Marks);

    if(Marks < 35)
    {
        printf("You are fail\n");
    }
    else
    {
        printf("You are pass\n");
    }

    return 0;
}