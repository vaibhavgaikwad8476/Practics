#include<stdio.h>

void DisplayResult(int Value)
{
    if(Value < 35)
    {
        printf("You are fail\n");
    }
    else
    {
        printf("You are pass\n");
    }
}

int main()
{
    int Marks = 0;

    printf("Enter your marks : \n");
    scanf("%d",&Marks);

    DisplayResult(Marks);

    printf("End of application\n");
    
    return 0;
}