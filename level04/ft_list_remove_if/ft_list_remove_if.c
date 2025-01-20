#include "ft_list.h"

t_list  *ft_new_node(void *data)
{
    t_list  *new;

    new = malloc(sizeof(t_list));
    if (!new)
        return (NULL);
    new->next = NULL;
    new->data = data;
    return (new);
}

void    ft_addend(t_list **root, void *data)
{
    t_list  *new;
    t_list  *curr;

    new = ft_new_node(data);
    if(!new)
        return;
    curr = *root;
    while(curr->next != NULL)
        curr = curr->next;
    curr->next = new;
}

void    ft_display_list(t_list **root)
{
    t_list  *curr;

    curr = *root;
    while(curr)
    {
        printf("%s -> ", (char *)curr->data);
        curr = curr->next;
    }
}

int main(int argc, char **argv)
{
    t_list  *root;
    int     iter = 2;

    if (argc > 1)
    {
        root = ft_new_node(argv[1]);
        if (argc > 2)
        {
            while(argv[iter])
            {
                ft_addend(&root, argv[iter]);
                iter++;
            }
        }
        ft_display_list(&root);
        printf("\n");
    }
    return (0);
}