#include <stdio.h>
int factorial (int n);
int main()
{
    int n;
    printf("no you want the factorial of? : \n");
    scanf("%d",&n);
    int answer = factorial(n);
    printf("%d \n",answer);

}
int factorial (int n)
{
    if (n == 0)
    {
        return 1;
    }
    else
    {
        return n * factorial(n-1);
    }
}
