#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <limits.h>
#include <stdbool.h>

#include <stdio.h>

void ft_tab_indx(int *arr,int len)
{
    


    int  j, temp;
    int i = 0;
    while ( i++ < len -1)
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

    }    
    int k=0;
    while (k < len)
    {
        printf(" arr[i] %d \n",arr[k]);
        k++;
    }
    
    //return arr;  
}
int main() {
    int arr[] = {1, 3, -2,5, 13,2,15, 7, 9};
    int num = 9;

   ft_tab_indx(arr, num);

    // printf("L'indice pour insérer %d dans le tableau tout en maintenant l'ordre croissant est : %d\n", num, index);

    return 0;
}







































// typedef struct t_stack
// {
//     int data;
//     int index;
//     int *tab;
// } stack;

// char **ft_split(char *s, char c);
// void init_stack(stack **a, char **av);
// int ft_isdigit(int c);
// int counter(char **av);
// void print_stack(stack *a);
// int ft_atoi(char *str);
// void stack_len(stack *s);

// static int ft_strlen(char *s)
// {
//     int i = 0;
//     while (s[i] != '\0')
//     {
//         i++;
//     }
//     return i;
// }

// static char *ft_substr(char *s, int start, int len)
// {
//     if (!s)
//         return NULL;
//     if (start > ft_strlen(s))
//     {
//         char *ptr = (char *)malloc(1 * sizeof(char));
//         if (ptr == NULL)
//             return NULL;
//         ptr[0] = '\0';
//         return ptr;
//     }
//     int k = ft_strlen(s + start);
//     if (k < len)
//         len = k;
//     char *ptr = (char *)malloc((len + 1) * sizeof(char));
//     if (ptr == NULL)
//         return NULL;
//     int i = 0;
//     while (i < len)
//     {
//         ptr[i] = s[start];
//         i++;
//         start++;
//     }
//     ptr[i] = '\0';
//     return ptr;
// }

// static int count_word(char *s, char c)
// {
//     int i = 0;
//     int count = 0;

//     while (s[i] != '\0')
//     {
//         if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
//             count++;
//         i++;
//     }
//     return count;
// }

// static int length_word(char *s, char c)
// {
//     int i = 0;
//     while (s[i] != '\0')
//     {
//         if (s[i] == c)
//             break;
//         i++;
//     }
//     return i;
// }

// char **ft_split(char *s, char c)
// {
//     char **list;
//     int word = count_word(s, c);
//     list = (char **)malloc((word + 1) * sizeof(char *));
//     if (!list)
//         return NULL;

//     int i = 0;
//     while (i < word)
//     {
//         while (*s == c && *s != '\0')
//             s++;

//         list[i] = ft_substr(s, 0, length_word(s, c));
//         s = s + length_word(s, c);
//         i++;
//     }
//     list[i] = NULL;
//     return list;
// }

// int ft_atoi(char *str)
// {
//     int i;
//     int s;
//     unsigned long long int r;

//     i = 0;
//     s = 1;
//     r = 0;
//     while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
//         i++;
//     if (str[i] == '-' || str[i] == '+')
//     {
//         if (str[i] == '-')
//             s = s * (-1);
//         i++;
//     }
//     while (str[i] >= 48 && str[i] <= 57)
//     {
//         r = (r * 10) + (str[i] - 48);
//         if (s == 1 && r > 9223372036854775807)
//             return (-1);
//         if (s == (-1) && r > 9223372036854775807)
//             return (0);
//         i++;
//     }
//     return (r * s);
// }



// int ft_isdigit(int c)
// {
//     if (c >= 48 && c <= 57)
//     {
//         return (1);
//     }
//     return (0);
// }

// int counter(char **av)
// {
//     int i = 1;
//     int count = 0;
//     char **list;
//     while (av[i] != NULL)
//     {
//         list = ft_split(av[i], ' ');
//         int j = 0;
//         while (list[j])
//         {
//             int k = 0;
//             while (list[j][k])
//             {
//                 if (!ft_isdigit(list[j][k]))
//                 {
//                     printf("Error\n");
//                     exit(1);
//                 }
//                 k++;
//             }
//             count++;
//             j++;
//         }
//         i++;
//     }
//     return count;
// }

// void init_stack(stack **a, char **av)
// {
//     int count = counter(av);
//     (*a)->index = 0;
//     (*a)->tab = (int *)malloc(count * sizeof(int));
//     if ((*a)->tab == NULL)
//     {
//         printf("Memory allocation failed.\n");
//         exit(1);
//     }

//     int i = 1;
//     int j = 0;
//     char **list;
//     while (av[i] != NULL)
//     {
//         list = ft_split(av[i], ' ');
//         int k = 0;
//         while (list[k])
//         {
//             (*a)->tab[j] = ft_atoi(list[k]);
//             (*a)->index++;
//             j++;
//             k++;
//         }
//         i++;
//     }
// }

// int main(int ac, char **av)
// {
//     stack *a = NULL;
//     stack *b =NULL;

//     if (ac == 1)
//     {
//         printf("Enter the elements:\n");
//         return 0;
//     }

//     a =     malloc(sizeof(stack));
//     b =     malloc(sizeof(stack));
//     if (a == NULL || b == NULL)
//     {
//         printf("Memory allocation failed.\n");
//         exit(0);
//     }

//     init_stack(&a, av);

//     print_stack(a);

//     return 0;
// }