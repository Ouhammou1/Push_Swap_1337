#include "push_swap.h"



void print_stack(stack *a)
{
    printf("\nElements of Stack:\n");
    stack *l;
    l =a;
    int i = 0;
    while (i < l->index)
    {
        printf("%d          --->>>> index  = %d\n", l->tab[i], i);
        i++;
    }
}
void ft_staack(stack *a, int len)
{
    int min=0;
    int max=15;

    if( stack_test(a) == false)
    {
        if(stack_len(&a) == 2)
            swap_a(a);

        else if ( stack_len(&a) == 3)
            sort_true(a);

        else if ( stack_len(&a) == 4)
            sort_four(a,len);

        else if ( stack_len(&a) == 5 )
            sort_five(a,len);
        else if(stack_len(&a) <= 100)
            ft_range(a,len, min, max);

        else
        {
            max =30;
            ft_sort_stack(a, len, min, max);
        }
    } 
}
int main(int ac, char **av)
{
    stack *a = NULL;
    int len = counter(av);
    if (ac == 1)
    {
        printf("Enter the elements:\n");
        return 0;
    }

    a = malloc(sizeof(stack));
    if (a == NULL )
    {
        printf("Memory allocation failed.\n");
        exit(0);
    }

    init_stack(a, av);

ft_staack(a,len);

  
    // print_stack(a);
   freeStack(a);

// system("leaks push_swap");
    return 0;
}
