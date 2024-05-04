#ifndef PUSH_SWAP_P
#define PUSH_SWAP_P

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdbool.h>
#include <limits.h>

typedef struct t_stack
{
    int     index;
    int     *tab;    
} stack ;

void    ft_free_list(char **list);
void    freeStack(stack *s) ;

char    **ft_split(char *s, char c);
void    init_stack( stack *a, char **av);
int     ft_isdigit(int c);
int     counter(char **av);
void    print_stack(stack *a);
int     ft_atoi( char *str);

//      sort stack 3

bool     stack_test(stack   *a);
int      stack_len(stack **a);
void     sort_true(stack *a);

///  sort stack 4 

void    sort_four(stack *a ,int len);
void    sort_f(stack *a,stack *b ,int indx);
int     indiceMin(stack *a, int taille) ;

// sort stack 5

void     sort_five(stack *a, int len);
void     staack_b(stack *a);
void     sort_stack(stack *a, stack *b, int ondx);
void     ft_function(stack *a,stack *b,int indx);

//          RULES
void    swap_a(stack *a);
void    swap_b(stack *b);
void    ss( stack *a, stack   *b);
void    push_in_b(stack  *a, stack *b);
void    push_in_a(stack     *a,stack    *b);
void    rotate_a(stack  *a);
void    rotate_b(stack  *b);
void    rr(stack *a, stack *b);
void    reverse_r_a(stack *a);
void    reverse_r_b(stack *b);
void    rrr(stack *a, stack *b);



//  handele Error 
// int	        error_syntax(char *str_n);
// int	        error_duplicate(stack *a, int n);
// void	    free_errors(stack **a);
// void	    free_stack(stack **a);


//  RANGE  100 NUMBERS
void 		ft_range(stack *a,int len, int min, int max);
int         *ft_tab_indx(stack *a,int len);
int         ft_return_index(int *rr, int len , int data);
int         ft_find_max(stack *b, int len);



// SORT MORE THAN 500 NUMBERS
void        ft_sort_stack(stack *a,int  len, int min, int max);
void        use_stack_b(int    *rr, stack *a, stack *b, int min , int max , int len);
void        use_stack_a(stack *a,stack *b);

//  handele Error 
int	    error_syntax_pp(char *str) ;
int		error_duplicate(stack *a,int nbr);


#endif