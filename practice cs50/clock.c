#include <stdio.h>
#include <time.h>
#include <unistd.h>

int main(void)
{
    while (1)
    {
        time_t t;
        struct tm *current;

        t = time(NULL);
        current = localtime(&t);

        printf("%02d:%02d:%02d\n",
               current->tm_hour,
               current->tm_min,
               current->tm_sec);

        sleep(1);
    }

    return 0;
}