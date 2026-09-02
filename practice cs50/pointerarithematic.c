#include <stdio.h>
int main()
{
    char name[] = "fiya";
    char *p = name;
    while(*p != '\0')
    {
        printf("%c\n",*p);
        p++;
    }

}