#include <stdio.h>
#include <stdlib.h>

void    fprime(int number)
{
    int     prime = 2;

    if (number >= 1 && number < 4)
        printf("%d", number);
    else
    {
        while (number )
        if (number % prime == 0)
        {

        }
    }
}

int main(int argc, char **argv)
{
    if (argc == 2)
    {
        fprime(atoi(argv[1]));
    }
    printf("\n");
    return (0);
}