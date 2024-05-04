#include "push_swap.h"

bool stack_test(stack *a)
{
    if (!a)
    {
        exit(0);
    }

    int i = 0;
    while (i < a->index - 1)
    {
        if (a->tab[i] > a->tab[i + 1])
        {
            return false;
        }
        i++;
    }
    return true;
}
int     stack_len(stack **a)
{
    return (*a)->index;
}
