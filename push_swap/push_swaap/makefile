DIR = ../push_swap_bonus
PATH2 = ../get_next_line


CC = cc
CFLAGS=-Wall -Wextra -Werror 
CFILES= ft_split.c init_stack.c ft_atoi.c  ft_range_opera.c  stack_test.c rules.c rules_1.c  rules_2.c  maiiin.c sort_true.c sort_five.c fouur.c \
ft_range.c ft_sort_stack.c handele.c free_stack.c

NAME = push_swap.a
NAME1 = push_swaaap.a


CFILES_BONUS = $(PATH2)/get_next_line.c $(PATH2)/get_next_line_utils.c init_stack.c handele.c \
ft_split.c free_stack.c ft_atoi.c stack_test.c $(DIR)/swap_bonus.c $(DIR)/ft_strcmp_bonus..c $(DIR)/rules1_bonus..c $(DIR)/rules2_bonus..c $(DIR)/rules3_bonus..c

Object = $(CFILES:.c=.o)
Object_bonus = $(CFILES_BONUS:.c=.o)

output = push_swap
output2 = checker_Me


all: $(output)

$(output): $(NAME)
	$(CC) $(CFLAGS) maiiin.c $(NAME) -o $(output)

$(NAME): $(Object)
	ar rcs $(NAME) $(Object)


bonus: $(output2)

$(output2): $(NAME1)
	$(CC) $(CFLAGS) $(DIR)/swap_bonus.c $(NAME1) -o $(output2)

$(NAME1): $(Object_bonus)
	ar rcs $(NAME1) $(Object_bonus)

clean:
	rm -f $(Object) $(Object_bonus) $(output) $(output2)

fclean: clean
	rm -f $(NAME) $(NAME1)

re : fclean all