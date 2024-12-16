#include <stdlib.h>
#include <stdio.h>

int     ft_strlen(char *str)
{
    int     len;
    int     iter;
    
    len = 0;
    iter = 0;
    while(str[iter])
    {
        if (str[iter] != '-')
            len++;
        iter++;
    }
    return len;
}

char    **ft_split(char *str)
{
    char **words;
    int len = 0;

    if (!str)
        return (NULL);
    len = ft_strlen(str);
    words = malloc(sizeof(char *)*len);
    
}

int     main(char **argv)
{
    char  **words = ft_split(argv[1]);
    return (0);
}