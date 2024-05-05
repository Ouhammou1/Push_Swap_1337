#include "push_swap.h"
void    use_stack_b(int    *rr,stack *a,stack *b ,int len)
{
    int min =0;
    int max =30;
        while (a->index != 0)
    {
        int indx = ft_return_index(rr,len,a->tab[0]);
        if ( indx >= min && indx <= max)
        {
            push_in_b(a,b);
            min++;
            max++;
        }
        else if (  indx > max)
        {
            rotate_a(a);
        }
        else
        {
            push_in_b(a,b);
            rotate_b(b);
            min++;
            max++;
        }
    }
}
void    use_stack_a(stack *a,stack *b)
{
    while ( b->index != 0)
    {
        int len = b->index;
        int y = ft_find_max(b,len);
        if(y <= len / 2)
        {
            while (y != 0)
            {
                rotate_b(b);
                y--;
            }
        }
        else
        {
            while (len - y != 0)
            {
                reverse_r_b(b);
                y++;
            }
        }
     push_in_a(a,b);
    }
}


void        ft_sort_stack(stack *a,int  len)
{
	stack *b; 
    b = malloc(sizeof(stack));
    if(!b)
        return ;
    b->tab = (int *)malloc(len * sizeof(int));
    if(!b->tab)
        return ;
    
    int *rr = ft_tab_indx(a,len);
    use_stack_b(rr,a,b,len);

    use_stack_a(a, b);

    
}

