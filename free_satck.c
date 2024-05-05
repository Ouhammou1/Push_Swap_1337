#include "push_swap.h"

void    freeStack(stack *s) 
{
    if (s == NULL)
    {
        return;
    }
    if (s->tab != NULL)
    {
        free(s->tab);
    }
    free(s);
}


void    ft_free_list(char **list)
{
        int  i;

        i = 0;
        while (list[i] != NULL)
        {
                free(list[i]);
                i++;
        }
        free(list);
}