<<<<<<< HEAD
#include <unistd.h>
#include <stdio.h>
=======
#ifndef FT_LIST_H
# define FT_LIST_H
>>>>>>> e65f1ec52dca75abfcb1996634f68912743e0f5e

<<<<<<< HEAD
void    ft_list_foreach(t_list *begin_list, void (*f)(void *));

typedef struct      s_list
{
    struct  s_list  *next;
    void            *data;
}                   t_list;
=======
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct      s_list
{
    struct  s_list  *next;
    void            *data;
}                   t_list;

void    ft_list_foreach(t_list *begin_list, void (*f)(void *));
t_list  *ft_new_node(void *content);
void  ft_add_back(t_list **root, void *content);
char    ft_toupper(char c);
void    ft_lst_toupper(void *data);

#endif
>>>>>>> e65f1ec52dca75abfcb1996634f68912743e0f5e