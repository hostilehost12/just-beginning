#include <stdio.h>
void swap(int *x,int *y);
int main ()
{
    int a = 5;
    int b = 10;
    swap(&a,&b);
    printf("%d,%d",a,b);

}
void swap(int *x,int *y)
{
    int temp;
    temp =  *x;
    *x = *y;
    *y = temp;

}