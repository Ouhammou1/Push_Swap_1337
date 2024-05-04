#include "push_swap.h"
int     *ft_tab_indx(stack *a,int len)
{
    int *arr;
    arr = (int *)malloc(len *sizeof(int));
    if(arr == 0)
        return 0;

    int i=0;
    while (i < len)
    {
        arr[i] = a->tab[i];
        i++;
    }

    int  j, min, temp;
    i = 0;
    while ( i < len - 1)
    {
        min = i;
        j = i + 1;
        while ( j < len)
        {
            if (arr[j] < arr[min])
                min = j;
            j++;
        }

        temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
        i++;
    }    
    return arr;  
}

int  ft_return_index(int *rr, int len , int data)
{
    int i = 0;
    while (i < len )
    {
        if(rr[i] == data)
        {
            return i;
        }
        i++;
    }
    return 0;
}

int     ft_find_max(stack *b, int len)
{
    int i =0;
    
    int tab[len];
    while (i < len)
    {
        tab[i]=b->tab[i];
        i++;
    }
    
    int max_numero = tab[0];
    int max_index = 0;

    i = 1;
    while(i < len)
    {
        if (tab[i] > max_numero)
        {
            max_numero = b->tab[i];
            max_index = i;
        }
        i++;
    }
    return max_index;
}

void 		ft_range(stack *a,int len,int min, int max)
{
	stack *b; 
    b = malloc(sizeof(stack));
    if(!b)
        return ;
    b->tab = (int *)malloc(len * sizeof(int));
    if(!b->tab)
        return ;
    
    int *rr = ft_tab_indx(a,len);

    while (a->index != 0)
    {
        int indx = ft_return_index(rr,len,a->tab[0]);
        if ( indx >= min && indx <= max)
        {
            push_in_b(a,b);
            // printf("1\n");
            min++;
            max++;
        }
        else if (  indx > max)
        {
            rotate_a(a);
            // printf("2\n");
        }
        else
        {
            push_in_b(a,b);
            rotate_b(b);
            min++;
            max++;
        }   
    }
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
    freeStack(b);
    
}
    



