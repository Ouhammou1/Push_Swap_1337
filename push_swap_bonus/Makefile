DIR = ../push_swaap
PATH2 = ../get_next_line

CC = cc
CFLAGS = -Wall -Wextra -Werror

CFILES = $(DIR)/ft_split.c $(DIR)/init_stack.c $(DIR)/ft_atoi.c $(DIR)/ft_range_opera.c $(DIR)/stack_test.c \
	$(DIR)/rules.c $(DIR)/rules_1.c $(DIR)/rules_2.c $(DIR)/maiiin.c $(DIR)/sort_true.c $(DIR)/sort_five.c \
	$(DIR)/fouur.c $(DIR)/ft_range.c $(DIR)/ft_sort_stack.c $(DIR)/handele.c $(DIR)/free_stack.c

CFILES_BONUS = $(PATH2)/get_next_line.c $(PATH2)/get_next_line_utils.c $(DIR)/init_stack.c $(DIR)/handele.c \
	$(DIR)/ft_split.c $(DIR)/free_stack.c $(DIR)/ft_atoi.c $(DIR)/stack_test.c swap_bonus.c ft_strcmp.c rules1.c rules2.c

NAME1 = push_swap.a
NAME2 = push_swaaap.a

Object = $(CFILES:.c=.o)
Object_bonus = $(CFILES_BONUS:.c=.o)

output1 = push_swap
output2 = checker_Me

all:$(output1) $(output2) 

$(output1): $(NAME1)
	$(CC) $(CFLAGS) $(DIR)/maiiin.c $(NAME1) -o $(output1)

$(output2): $(NAME2)
	$(CC) $(CFLAGS)  swap_bonus.c $(NAME2) -o $(output2)

$(NAME1): $(Object)
	ar rcs $(NAME1) $(Object)

$(NAME2): $(Object_bonus)
	ar rcs $(NAME2) $(Object_bonus)

clean:
	rm -f $(Object) $(Object_bonus)

fclean: clean
	rm -f $(NAME1) $(NAME2) $(output1) $(output2)

re: fclean all