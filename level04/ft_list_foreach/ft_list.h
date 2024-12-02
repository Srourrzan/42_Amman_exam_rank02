#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void    ft_list_foreach(t_list *begin_list, void (*f)(void *));

typedef struct      s_list
{
    struct  s_list  *next;
    void            *data;
}                   t_list;