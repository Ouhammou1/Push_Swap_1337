#include "push_swap.h"

//          pb (push b): Take the first element at the top of a and put it at the top of b.
void    push_in_b(stack     *a,stack    *b)
{
    if (a == NULL || a->index == 0)
    {
        return;
    }

        b->tab[b->index] = a->tab[0];
        b->index++;
        staack_b(a);

        int start = 0;
        int end = b->index - 1;

    while (start < end)
    {
        int temp = b->tab[start];
        b->tab[start] = b->tab[end];
        b->tab[end] = temp;

        start++;
    }
    printf("pb\n");
    // return;    
}

void    push_in_a(stack     *a,stack    *b)
{
    if (b == NULL || b->index == 0)
    {
        return;
    }
        staack_aaa(a);
        a->tab[0] = b->tab[0];
   
        staack_b(b);


    //     int start = 0;
    //     int end = b->index - 1;

    // while (start < end) {

    //     int temp = a->tab[start];
    //     a->tab[start] = a->tab[end];
    //     a->tab[end] = temp;

    //     start++;
    // }
    printf("pa\n");
    // return;
    
}


//   ra (rotate a): Shift up all elements of stack a by
void    rotate_a(stack  *a)
{
    int tmp;
    int i =0;
    tmp = a->tab[i];
    while ( i < a->index -1)
    {
        a->tab[i] = a->tab[i+1];
        i++;
    }
    a->tab[i] =tmp;
    printf("ra\n");
}
// rb (rotate b): Shift up all elements of stack b by 1.

void    rotate_b(stack  *b)
{
    int tmp;
    int i =0;
    tmp = b->tab[i];
    while ( i < b->index -1)
    {
        b->tab[i] = b->tab[i+1];
        i++;
    }
    b->tab[i] =tmp;
    printf("rb\n");
}

// rr : ra and rb at the same time. 

void    rr(stack *a, stack *b)
{
    (void)b;
    rotate_a(a);
    rotate_b(b);
    printf("rr\n");
}
// rra (reverse rotate a): Shift down all elements of stack a by 1.
