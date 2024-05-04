#include "push_swap.h"

int indiceMin(stack *a, int taille)
{
    int indiceMin = 0;  
    int i=1;

    while (i < taille) 
    {
        if (a->tab[i] < a->tab[indiceMin]) 
        {
            indiceMin = i;
        }
       i++;
    }
    return indiceMin;
}

void    sort_f(stack *a,stack *b ,int indx)
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
void    sort_four(stack *a ,int len)
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

    sort_f(a,b,indx);

    if(stack_test(a) == false)
    {
        sort_true(a);   
    }
    push_in_a(a,b);
    //freeStack(b);

}
