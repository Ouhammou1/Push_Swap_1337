CC = cc
CFLAGS=-Wall -Wextra -Werror
CFILES= ft_split.c init_stack.c  stack_test.c rules.c maiiin.c sort_true.c sort_five.c fouur.c  ft_range.c ft_sort_stack.c handele.c free_satck.c
NAME = push_swap.a


Object = $(CFILES:.c=.o)
output = push_swap

# $(NAME)
all: $(output)

$(output): $(NAME)
	gcc maiiin.c $(NAME) -o $(output)

$(NAME): $(Object)
	ar rcs $(NAME) $(Object)

clean:
	rm -f $(Object)

fclean: clean
	rm -f $(NAME)

re : fclean $(NAME)


