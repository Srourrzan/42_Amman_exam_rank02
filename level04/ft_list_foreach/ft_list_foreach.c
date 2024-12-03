#include "ft_list.h"
#include <string.h>

t_list  *ft_new_node(void *content)
{
    t_list  *new;

    
    new = malloc(sizeof(t_list));
    if (!new)
        return (NULL);
    new->data = content;
    new->next = NULL;
    return (new);
}

void  ft_add_back(t_list **root, void *content)
{
    t_list  *new;
    t_list  *curr;

    new = ft_new_node(content);
    if (!new)
        return;
    if (!root)
    {
        *root = new;
        return;
    }
    curr = *root;
    while (curr->next != NULL)
        curr = curr->next;
    curr->next = new;
}

// It must be declared as follows:
// 
// void    ft_list_foreach(t_list *begin_list, void (*f)(void *));
// 
// The function pointed to by f will be used as follows:
// 
// (*f)(list_ptr->data);

void ft_lst_toupper(void *data)
{
    // char    *str =malloc(sizeof(data));
    char *str = (char *)data;
    int iter = 0;
    if (!str)
        printf("error");
    while (str[iter])
    {
        printf("str: %c, ", str[iter]);
        str[iter] = ft_toupper(str[iter]);
        printf("str: %c, ", str[iter]);
        iter++;
    }
    printf(" \n");
}

char    ft_toupper(char c)
{
    if (c >= 'a' && c <= 'z')
        c = c - ('a' - 'A');
    return (c);
}

void    ft_list_foreach(t_list *root, void (*f)(void *))
{
    t_list  *curr;

    curr = root;
    printf("looping:\n");
    while (curr)
    {
        printf("curr->data: %s\n", (char *)curr->data);
        f(curr->data);
        printf("curr->data: %s\n", (char *)curr->data);
        curr = curr->next;
    }
}

int main()
{
    t_list  *root;
    t_list  *curr;

    root = NULL;
    curr = NULL;
    root = ft_new_node(strdup("Razan"));
    ft_add_back(&root, strdup("Srour"));
    ft_add_back(&root, strdup("27"));
    ft_add_back(&root, strdup("."));
    curr = root;
    printf("list content:\n");
    while(curr)
    {
        printf("%s\n", (char *)curr->data);
        curr = curr->next;
    }
    printf("--------------------------\n");
    ft_list_foreach(root, ft_lst_toupper);
    curr = root;
    printf("list content:\n");
    while(curr)
    {
        printf("%s\n", (char *)curr->data);
        curr = curr->next;
    }
    return (0);
}
// int     main()
// {
//     char *str = "mera";
//     char *new  =malloc (sizeof(char) * 4);
//     int i =0;
// while (i<4)
// {
//     new[i] = ft_toupper(str[i]);
//     i++;
// }
//     printf("str: %s, new: %s\n", str, new);

// }