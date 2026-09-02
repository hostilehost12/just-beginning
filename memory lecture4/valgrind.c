#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *X = malloc(3 * sizeof(int));
    X[1] = 42;
    X[2] = 43;
    X[3] = 32;

}