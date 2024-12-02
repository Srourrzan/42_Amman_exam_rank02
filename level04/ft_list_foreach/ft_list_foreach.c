#include "ft_list.h"

t_list  *ft_new_node(void *content)
{
    t_list  *new;

    
    new = malloc(sizeof(new));
    if (!new)
        return (NULL);
    new->data = content;
    new->next = NULL;
    return (new);
}

// It must be declared as follows:
// 
// void    ft_list_foreach(t_list *begin_list, void (*f)(void *));
// 
// The function pointed to by f will be used as follows:
// 
// (*f)(list_ptr->data); 

void    ft_lst_toupper(void *data)
{
    char    *str = (char *)data;
    while (*str)
    {
        *str = ft_toupper(*str);
        str++;
    }
}

char    ft_toupper(char c)
{
    if (c >= 'a' && c <= 'z')
        c = c - ('a' - 'A');
    return (c);
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

int main()
{
    t_list  *root;
    t_list  *curr;

    root = NULL;
    curr = NULL;
    root = ft_new_node("Razan");
    ft_add_back(&root, "Srour");
    ft_add_back(&root, "27");
    ft_add_back(&root, ".");
    curr = root;
    printf("list content:\n");
    while(curr)
    {
        printf("%s\n", (char *)curr->data);
        curr = curr->next;
    }
    return (0);
}