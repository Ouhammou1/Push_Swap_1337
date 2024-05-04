#include "push_swap.h"


int	error_syntax(char *str_n) //Define a funtion to handle syntax errors, and returns `1` for `error` should any of the following conditions are met
{
	printf("\n   error		syntax \n\n");
	if (!(*str_n == '+' || *str_n == '-' || (*str_n >= '0' && *str_n <= '9'))) //Check if the first character of the input string does not contain a sign or a digit
	{
        	printf("Error \n");
			return (1);
	}
	if ((*str_n == '+' || *str_n == '-') && !(str_n[1] >= '0' && str_n[1] <= '9')) //Check if the first character of the input string contains a sign, but the second character does not contain a digit
	{
			printf("Error\n");
			return (1);
	}
		
	while (*++str_n) //If the error conditions above are passed, pre-increment to point to the next character in the string, and loop until the end of the string is reached
	{
		if (!(*str_n >= '0' && *str_n <= '9')) //Check if the next character in the string is not a digit
			printf("Error \n");
			return (1);
	}
	return (0);
}

int	error_duplicate(stack *a, int n) //Define a function that checks for duplicate input numbers in stack `a`
{
	printf("\n error_duplicate \n\n");
	if (!a) //Check for an empty stack
		return (0);
	int i=0;
	while (i < a->index) //Loop until the end of stack `a` is reached
	{
		if (a->tab[i] == n) //Check if the current node's value is equal to `n`. Refer to `init_stack_a()`
		{
			printf("Error  ----> number are deplicate\n");
			return (1);
		}
		i++; //Move to the next node to check for duplicates
	}
	return (0);
}


void	free_stack(stack **a) //Define a function to free a stack if there are errors
{

	printf("  \nfree stack  \n\n");
	free(*a);
	// stack	*tmp; //To store the next node in the stack before the current node is freed, because once a node is freed, you can't access its next pointer
	// stack	*current;

	// if (!a) //Check for an empty stack
	// 	return ;
	// current = *a;
	// while (current) //As long as a node exist in the stack
	// {
	// 	tmp = current->next; //Assign to `tmp` the pointer to the next node
	// 	current->data = 0; //Assigning the node to `0` before freeing is not strictly necessary but it can help catch potential bugs such as memory-leaks and improve debugging
	// 	free(current); //Free the current node, deallocating the memory occupied by that node
	// 	current = tmp; //Assign `tmp` as the current first node
	// }
	// *a = NULL;
}

void	free_errors(stack **a) //Define a function that, upon encountering a unique error, to free the stack and print an error message
{
	free_stack(a);
	printf("Error\n");
	exit(1);
}
