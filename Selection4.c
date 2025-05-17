#include<stdio.h>

int main()
{
    int Std = 0;

    printf("Please enter your standard : \n");
    scanf("%d",&Std);

    switch(Std)
    {
        case 1 : 
            printf("Your exam is at 9 AM\n");
            break;
        case 2 :
            printf("Your exam is at 10 AM\n");
            break;
        case 3 :
            printf("Your exam is at 11 AM\n");
            break;        
        case 4 :
            printf("Your exam is at 12 NOON\n");
            break;
        default:
            printf("Wrong input\n");
    }
    
    return 0;
}

