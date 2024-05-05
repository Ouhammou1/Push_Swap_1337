#include "push_swap.h"

void reverse_r_a(stack *a)
{
    int tmp;
    int i =0;

    tmp = a->tab[a->index -1];
    i = a->index -1;
    while ( i > 0)
    {
        a->tab[i] = a->tab[i - 1];
        i--;
    }
    a->tab[i]=tmp;
    printf("rra\n");
}
void reverse_r_b(stack *b)
{
    int tmp;
    int i =0;

    tmp = b->tab[b->index -1];
    i = b->index -1;
    while ( i > 0)
    {
        b->tab[i] = b->tab[i - 1];
        i--;
    }
    b->tab[i]=tmp;
    printf("rrb\n");
}
void    rrr(stack *a, stack *b)
{
    reverse_r_a(a);
    reverse_r_b(b);
    printf("rrr\n");
}
