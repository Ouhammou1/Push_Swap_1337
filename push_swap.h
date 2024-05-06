/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bouhammo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 15:35:38 by bouhammo          #+#    #+#             */
/*   Updated: 2024/05/06 15:35:40 by bouhammo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_P
# define PUSH_SWAP_P

# include <limits.h>
# include <stdbool.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct t_stack
{
	int			index;
	int			*tab;
}				stack;

void			ft_free_list(char **list);
void			free_stack(stack *s);

//   split

char			**ft_split(char *s, char c);
int				ft_strlen(char *s);
char			*ft_substr(char *s, int start, int len);
int				count_word(char *s, char c);
int				length_word(char *s, char c);
char			**ft_free(char **list, int len);

// stock numbres in stack a
void			init_stack(stack *a, char **av);
void			stock_nbr_ina(stack *a, char **list, int indx);
int				ft_isdigit(int c);
int				counter(char **av);
int				ft_count_nbr(char **list);
void			print_stack(stack *a);
long long int	ft_atoi(char *str);
char            *ft_strdup( char *s);


//      sort stack 3

bool			stack_test(stack *a);
int				stack_len(stack **a);
void			sort_true(stack *a);

///  sort stack 4

void			sort_four(stack *a, int len);
void			sort_f(stack *a, stack *b, int indx);
int				indice_min(stack *a, int taille);

// sort stack 5

void			sort_five(stack *a, int len);
void			sort_stack(stack *a, stack *b, int ondx);

//          RULES
void			swap_a(stack *a);
void			swap_b(stack *b);
void			ss(stack *a, stack *b);
void			push_in_b(stack *a, stack *b);
void			push_in_a(stack *a, stack *b);
void			rotate_a(stack *a);
void			rotate_b(stack *b);
void			rr(stack *a, stack *b);
void			reverse_r_a(stack *a);
void			reverse_r_b(stack *b);
void			rrr(stack *a, stack *b);
// help rules
void			staack_aaa(stack *a);
void			staack_b(stack *a);

//  RANGE  100 NUMBERS
void			ft_range(stack *a, int len);
int				*ft_tab_indx(stack *a, int len);
void			ft_sort_tab(int *arr, int len);
int				ft_return_index(int *rr, int len, int data);
int				ft_find_max(stack *b, int len);

// SORT MORE THAN 500 NUMBERS
void			ft_sort_stack(stack *a, int len);
void			use_stack_b(int *rr, stack *a, stack *b, int len);
void			use_stack_a(stack *a, stack *b);

//  handele Error
int				error_syntax_pp(char *str);
int				error_duplicate(stack *a, int nbr);
void			ft_putstr(char *str);

#endif
