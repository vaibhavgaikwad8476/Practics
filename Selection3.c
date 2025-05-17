/*
    1   : 9 AM
    2   : 10 AM
    3   : 11 AM
    4   : 12 AM   
*/

#include<stdio.h>

int main()
{
    int Std = 0;

    printf("Please enter your standard : \n");
    scanf("%d",&Std);

    if(Std == 1)
    {
        printf("Your exam is at 9 AM\n");
    }
    else if(Std == 2)
    {
        printf("Your exam is at 10 AM\n");
    }
    else if(Std == 3)
    {
        printf("Your exam is at 11 AM\n");
    }
    else if(Std == 4)
    {
        printf("Your exam is at 12 NOON \n");
    }
    else
    {
        printf("Wrong input\n");
    }
    
    return 0;
}

