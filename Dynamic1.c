#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *p = NULL;
    int size = 0;

    printf("Enter number of elements that you want to allocate : \n");
    scanf("%d",&size);

    p = (int *)malloc(size * sizeof(int));
    if(p == NULL)
    {
        printf("Unable to allcoate memmory\n");
        return -1;
    }

    printf("Memory gets allocated succesfully\n");

    // Use of memory

    free(p);

    return 0;
}