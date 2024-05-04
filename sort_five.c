#include "push_swap.h"
// int     find_max(stack  *a)
// {
//     int i= 1;
//     int tmp;
//     tmp = a->tab[0];
//     int index = 0;
//     while (i < a->index)
//     {
//         if(a->tab[i] > tmp)
//         {
//             tmp = a->tab[i];
//             index = i;
//         }
//             i++;
//     }
//     return index;
// }
// void    ft_function(stack *a,stack *b,int indx)
// {
//     // printf("index  ===>>>>>>>>>>>>>>>>>>>>>> %d \n",indx);
//     int len = stack_len(&a) ;
//     printf("uuuu %d \n\n",len);
//     // if(indx == 0)
//     // {
//     //     print_stack(a);
//     //     push_in_a(a,b);
//     //     printf("okokkokokokokokokokokoko\n \n\n\n\n\n\n\n");
//     //     print_stack(a);
//     //     return;
//     // }
//     if(indx <= len / 2)
//     {
//         while (indx != 0)
//         {
//             printf("\nOK OK OK \n");
//             rotate_a(a);
//             indx--;
//         }
//     }
//     else
//     {
//         while (len - indx != 0)
//         {
//             printf("\nOK OK\n");
//             reverse_r_a(a);
//             indx++;
//         }
//     }
//             printf("\nOK\n");
//     push_in_a(a,b);
// } 



void     sort_stack(stack *a, stack *b, int indx)
{
    int len = stack_len(&a) ;
    if(indx <= len / 2)
    {
        while (indx != 0)
        {
            rotate_a(a);
            indx--;
        }
    }
    else
    {
        while (len - indx != 0)
        {
            reverse_r_a(a);
            indx++;
        }
    }
   push_in_b(a,b);
}


void sort_five(stack *a ,int len)
{
    stack *b; 
    int indx;

    b = malloc(sizeof(stack));
    if(!b)
        return ;

    b->tab = (int *)malloc(len * sizeof(int));
    if(!b->tab)
        return ;
    indx = indiceMin(a,len);

    sort_stack(a,b,indx);

    if(stack_test(a) == false)
    {
        sort_four(a,len);   
    }
    push_in_a(a,b);
    freeStack(b);

}

