#include "push_swap.h"

void     sort_true(stack *a)
{
    int x = a->tab[0];
    int y = a->tab[1];
    int z = a->tab[2];

    if ( x > y && z > x)
        {
            swap_a(a);
        }
    else if  (x > y && y > z)
    {
        swap_a(a);
        reverse_r_a(a);
    }
    else if ( x > y && z > y)
        {
            rotate_a(a);
        }

    else if ( x < y &&  z < x )
        {
            reverse_r_a(a);
        }

    else{
        swap_a(a);
        rotate_a(a); 
    }

}