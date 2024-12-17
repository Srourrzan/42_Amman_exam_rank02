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

char    **ft_split(char *str)
{
    //char **words;
    //int len = 0;
    int     num_words;

    if (!str)
        return (NULL);
    //len = ft_strlen(str);
    //words = malloc(sizeof(char *)*len);
    num_words = ft_num_words(str);
    printf("number of words: %d\n", num_words);
    return NULL;
}

int     main(int argc, char **argv)
{
    if (argc == 2)
    {
        char  **words = ft_split(argv[1]);
        printf("%s\n", words[0]);
    }
    return (0);
}