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
        if ((str[iter] != ' '))
            len++;
        iter++;
    }
    return len;
}

int     ft_num_words(char *str)
{
    int     counter;
    int     word_bool;
    int     iter;

    iter = 0;
    counter = 0;
    word_bool = 0;
    while (str[iter])
    {
        if ((str[iter] != '\n' || str[iter] != ' ') && (word_bool == 0))
        {
            word_bool = 1;
            counter++;
        }
        else if (str[iter] == '\n' || str[iter] == ' ')
            word_bool = 0;
        iter++;
    }
    return (counter);
}

char    *ft_strncpy(char *s1, char *s2, int n)
{
    int i = -1;

    while (++i < n && s2[i])
        s1[i] = s2[i];
    s1[i] = '\0';
    return (s1);
}

void    ft_fill_words(char **words, char *str, int num_words)
{
    int     iter;
    int     counter;

    iter = 0;
    counter = 0;
    while(str[iter] && (counter < num_words))
    {
        if(str[iter] != '\n' || str[iter] != ' ')
        {
            words[counter][iter] = str[iter];
        }
        iter++;
    }
}

char    **ft_split(char *str)
{
    char    **words;
    int     len;
    int     num_words;

    len = 0;
    num_words = 0;
    printf("--\n");
    if (!str)
        return (NULL);
    printf("--\n");
    len = ft_strlen(str);
    printf("--\n");
    words = malloc(sizeof(char *)*(num_words+1));
    if (!words)
        return (NULL);
    printf("--\n");
    num_words = ft_num_words(str);
    printf("num of words = %d\n", num_words);
    ft_fill_words(words, str, num_words);
    printf("--\n");
    return (words);
}

int     main(int argc, char **argv)
{
    printf("--\n");
    if (argc == 2)
    {
        printf("--\n");
        char  **words = ft_split(argv[1]);
        printf("%s\n", words[0]);
    }
    return (0);
}