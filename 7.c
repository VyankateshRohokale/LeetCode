#include <stdio.h>

void reverse(int x) 
{
    int digit = 0;

    if (x < 0) 
    {
        printf("-");
        x = -x;
    }

    while (x > 0) 
    {
        digit = x % 10;
        x = x / 10;
        if(digit != 0)
        {
            printf("%d", digit);
        }
    }

}

int main() 
{
    int no = 0;

    printf("Enter a number: ");
    scanf("%d", &no);

    reverse(no);

    return 0;
}
