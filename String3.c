#include<stdio.h>

int strlenX(char *Brr)
{
    int iCnt = 0;

    while(*Brr != '\0')
    {
        iCnt++;
        Brr++;
    }
    return iCnt;
}

int main()
{
    char Arr[] = "Marvellous Infosystems";
    int ret = 0;

    ret = strlenX(Arr);

    printf("Length of string is : %d\n",ret);

    return 0;
}