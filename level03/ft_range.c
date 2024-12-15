#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int     ft_atoi(char *src)
{
    int     result;
    int     sign;

    result = 0;
    sign = 1;
    if (*src == '-' || *src == '+')
    {
        if (*src == '-')
            sign = -1;
        src++;
    }
    while (*src >= '0' && *src <= '9')
    {
        result = (result * 10) + *src - '0';
        src++;
    }
    result *= sign;
    return (result);
}

int     abs_diff(int start, int end)
{
    if ((start - end) < 0)
        return (end - start);
    return (start - end);
}

int     *ft_range(int start, int end)
{
    int     *arr;
    int     diff;
    int     index;

    index = 0;
    diff = abs_diff(start, end);
    arr = malloc(sizeof(int)*(diff+2));
    if (!arr)
        return (NULL);
    while (start != end)
    {
        arr[index] = start;
        printf("index %d: %d\n", index, arr[index]);
        index++;
        if (start > end)
            start--;
        else
            start++;
    }
    arr[index] = end;
    printf("index %d: %d\n", index, arr[index]);
    index++;
    arr[index] = '\0';
    printf("size = %d, index = %d\n", diff+2, index);
    return (arr);
}

int     main(int argc, char **argv)
{
    int     *arr;
    int     index;

    index = 0;
    if (argc == 3)
    {
        arr = ft_range(ft_atoi(argv[1]), ft_atoi(argv[2]));
        while (index <= (ft_atoi(argv[1]) - ft_atoi(argv[2])))
        {
            printf("%d: %d\n", index, arr[index]);
            index++;
        }
    }
    write(1, "\n", 1);
    return (0);
}