#include "push_swap.h"

int     ft_isdigit(int c)
{

    if (c >= 48 && c <= 57)
    {
            return (1);
    }
    return (0);
}
 
int counter(char **av)
{
    int i=1;
    int count=0;
    char **list;
    while(av[i] != NULL)
    {
        list = ft_split(av[i], ' ');
        int j =0;
        while(list[j])
        {
            int k=0;
            if(list[j][k] == '-' || list[j][k] == '+')
                k++;
            while(list[j][k])
            {
                if(!ft_isdigit(list[j][k]))
                {
                    ft_putstr("Error\n");
                    exit(1);
                }
                k++;
            }
            count++;
            j++;
        }
        i++;
    }
    // ft_free_list(list);
    return count;
}

void init_stack(stack *a, char **av)
{
    int count = counter(av);
    a->index = 0;
    a->tab = (int *)malloc(count * sizeof(int));
    if (a->tab == NULL)
    {
        printf("Memory allocation failed.\n");
        exit(1);
    }

    int i = 1;
    int j = 0;
    char **list;
    while (av[i] != NULL)
    {
        list = ft_split(av[i], ' ');
        // printf("************** |%s| \n",list[i]);
        // if (error_syntax_pp(list[i]) == 1)
        // {
        //     printf("WALO\n\n");
        // }
        int k = 0;
        while (list[k])
        {
            if(error_syntax_pp(list[k]) == 1)
            {
                ft_putstr("Errlor\n");
                exit(1);
            }
            long long int n = ft_atoi(list[k]);

            if( n > INT_MAX || n < INT_MIN)
            {
                ft_putstr("Error\n");
                exit(1);
            }   

            a->tab[j] = n;

            if(error_duplicate(a,n))
            {
                ft_putstr("Error\n");
                exit(1);
            }
            a->index++;
            j++;
            k++;
        }
        i++;
    }
    // ft_free_list(list);
}
