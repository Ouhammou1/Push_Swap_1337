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

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <limits.h>
# include <stdbool.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct t_t_stack
{
	int			index;
	int			*tab;
}				t_stack;

void			ft_free_list(char **list);
void			free_t_stack(t_stack *s);

//   split

char			**ft_split(char *s, char c);
int				ft_strlen(char *s);
char			*ft_substr(char *s, int start, int len);
int				count_word(char *s, char c);
int				length_word(char *s, char c);
char			**ft_free(char **list, int len);

// stock numbres in t_stack a
void			init_t_stack(t_stack *a, char **av);
void			stock_nbr_ina(t_stack *a, char **list, int indx);
int				ft_isdigit(int c);
int				counter(char **av);
int				ft_count_nbr(char **list);
void			print_t_stack(t_stack *a);
long long int	ft_atoi(char *str);
char			*ft_strdup(char *s);

//      sort t_stack 3

bool			t_stack_test(t_stack *a);
int				t_stack_len(t_stack **a);
void			sort_true(t_stack *a);

///  sort t_stack 4

void			sort_four(t_stack *a, int len);
void			sort_f(t_stack *a, t_stack *b, int indx);
int				indice_min(t_stack *a, int taille);

// sort t_stack 5

void			sort_five(t_stack *a, int len);
void			sort_t_stack(t_stack *a, t_stack *b, int ondx);

//          RULES
void			swap_a(t_stack *a);
void			swap_b(t_stack *b);
void			ss(t_stack *a, t_stack *b);
void			push_in_b(t_stack *a, t_stack *b);
void			push_in_a(t_stack *a, t_stack *b);
void			rotate_a(t_stack *a);
void			rotate_b(t_stack *b);
void			rr(t_stack *a, t_stack *b);
void			reverse_r_a(t_stack *a);
void			reverse_r_b(t_stack *b);
void			rrr(t_stack *a, t_stack *b);
// help rules
void			staack_aaa(t_stack *a);
void			staack_b(t_stack *a);

//  RANGE  100 NUMBERS
void			ft_range(t_stack *a, int len);
int				*ft_tab_indx(t_stack *a, int len);
void			ft_sort_tab(int *arr, int len);
int				ft_return_index(int *rr, int len, int data);
int				ft_find_max(t_stack *b, int len);

// SORT MORE THAN 500 NUMBERS
void			ft_sort_t_stack(t_stack *a, int len);
void			use_t_stack_b(int *rr, t_stack *a, t_stack *b, int len);
void			use_t_stack_a(t_stack *a, t_stack *b);

//  handele Error
int				error_syntax_pp(char *str);
int				error_duplicate(t_stack *a, int nbr);
void			ft_putstr(char *str);

#endif
