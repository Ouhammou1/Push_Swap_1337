#include "push_swap.h"

void    use_stack__bb(int *rr,stack *a,stack *b,int len)
{
    int min=0;
    int max=15;
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

void 		ft_range(stack *a,int len)
{
	stack *b; 
    b = malloc(sizeof(stack));
    if(!b)
        return ;
    b->tab = (int *)malloc(len * sizeof(int));
    if(!b->tab)
        return ;
    
    int *rr = ft_tab_indx(a,len);

    use_stack__bb(rr, a, b, len);
    use_stack_a(a,b);
   
    freeStack(b);
    
}
    



