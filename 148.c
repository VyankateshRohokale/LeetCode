
#include<stdio.h>

int main()
{
    int arr1[4];
    int i = 0;
    int j = 0;
    int forswap = 0;

    printf("head = [ ");

    for(i = 0; i < 4; i++)
    {
        scanf("%d",&arr1[i]);
    }

    for(i=0;i<4;i++)
    {
        for(j=0;j < 4; j++)
        {
            if(arr1[i] < arr1[j] )
            {
                forswap = arr1[i];
                arr1[i] = arr1[j];
                arr1[j] = forswap;
            }
        }
    }

    printf("\n");

    for(i=0;i<4;i++)
    {
        printf("%d",arr1[i]);
        printf(",");
    }
    return 0;
}

