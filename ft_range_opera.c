#include "push_swap.h"
int     *ft_tab_indx(stack *a,int len)
{
    int *arr;
    arr = (int *)malloc(len *sizeof(int));
    if(arr == 0)
        return 0;

    int i = 0;
    while (i < len)
    {
        arr[i] = a->tab[i];
        i++;
    }  
    int  j, temp;
    i = 0;
    while ( i < len -1)
    {
        j = i + 1;
        while ( j < len)
        {
        temp = arr[i];
            if (temp > arr[j] )
            {
                arr[i] = arr[j];
                arr[j] = temp;
            }
            j++;
        }
        i++;
    }    
    // printf("                            OK \n");
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