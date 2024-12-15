#include <unistd.h>
#include <stdio.h>

char    ft_strchr(char *src, int c)
{
    while (*src != '\0' && *src != (unsigned char)c)
        src++;
    if (*src == (unsigned char)c)
        return (c);
    return ('\0');
}

void    ft_putstr(char *str)
{
    int iter = 0;

    while (str[iter])
    {
        write(1, &str[iter], 1);
        iter++;
    }
}

void    ft_union(char *src1, char *src2)
{
    char    str[27];
    int     iter1 = 0;
    int     iter2 = 0;

    while(src1[iter1])
    {
        if (src1[iter1] != ft_strchr(str, src1[iter1]))
        {
            str[iter2] = src1[iter1];
            iter2++;
        }
        iter1++;
    }
    iter1 = 0;
    while(src2[iter1])
    {
        if (src2[iter1] != ft_strchr(str, src2[iter1]))
        {
            str[iter2] = src2[iter1];
            iter2++;
        }
        iter1++;
    }
    str[iter2]='\0';
    ft_putstr(str);
}

int     main(int argc, char **argv)
{
    if (argc == 3)
        ft_union(argv[1], argv[2]);
    write(1, "\n", 1);
    return (0);
}
