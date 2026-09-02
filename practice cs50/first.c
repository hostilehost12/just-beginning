#include <stdio.h>
int main(void)
{
    int x;
    printf("enter an integer:");
    scanf("%d" , &x );
    printf("you entered: %d\n", x);
    if (x > 0)
    {
        printf("the number is positive \n");

    }
    else if (x < 0)
    {
        printf("the number is negative \n");

    }
    else
    {
        printf("the number is zero \n");
    }
    if (x % 2==0)
    {
        printf("the number is even\n");

    }
    else
    {
        printf("the number is odd\n");
    }
    return 0;
}

