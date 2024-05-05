#include  "push_swap.h"

void    staack_b(stack *a)
{
    int i =0;
    while (i < a->index - 1)
    {
        a->tab[i]=a->tab[i + 1];
        i++;
    }
    a->index--;
}
void    staack_aaa(stack *a)
{
    int i =a->index;
    while ( i > 0)
    {
        a->tab[i] = a->tab[i - 1];
        i--;
    }
   a->index++;
}

//sa  (swap a): Swap the first 2 elements at the top of stack a.
void swap_a(stack *a)
{
    if (!a || a->index < 2)
    {
        return;
    }

    int temp  = a->tab[0];
    a->tab[0] = a->tab[1];
    a->tab[1] = temp;
    printf("sa\n");
}
// sb (swap b): Swap the first 2 elements at the top of stack b
void swap_b(stack *b)
{
    if (!b || b->index < 2)
    {
        return;
    }

    int temp = b->tab[0];
    b->tab[0] = b->tab[1];
    b->tab[1] = temp;
    printf("sb\n");
}
// ss : sa and sb at the same time.

void    ss( stack   *a, stack   *b)
{
    swap_a(a);
    swap_b(b);
    printf("ss\n");
}
