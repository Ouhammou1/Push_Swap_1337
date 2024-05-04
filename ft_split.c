#include "push_swap.h"

static int     ft_strlen(char *s)
{
    int i =0;
    while (s[i] != '\0')
    {
        i++;
    }
    return i;
}
static char *ft_substr(char  *s,  int start, int  len)
{
    if(!s)
        return  NULL;
    if(start > ft_strlen(s) )
    {
        char *ptr = (char *)malloc(1*sizeof(char));
        if(ptr == NULL)
            return NULL;
        ptr[0]='\0';
        return ptr;
    }
    int k =ft_strlen(s + start);
    if(k < len)
        len = k;
    char *ptr =(char *)malloc((len +1) * sizeof(char));
    if(ptr == NULL)
        return NULL;
    int i=0;
    while ( i < len)
    {
        ptr[i] = s[start];
        i++;
        start++;
    }
    ptr[i]='\0';
    return ptr;
    }
static int count_word(char *s, char  c)
{
    int i=0;
    int count=0;

    while (s[i]!= '\0')
    {
        if(s[i]!= c && (s[i + 1] == c || s[i + 1] == '\0'))
            count++;
        i++;
    }
    return count;
}
static int length_word(char    *s,char     c)
{
    int i =0;
    while (s[i] != '\0')
    {
        if(s[i] == c)
            break;
        i++;
    }
    return i;
}
static char      **ft_free(char **list, int len)
{
        int  i;

        i = 0;
        while (i < len)
        {
                free(list[i]);
                i++;
        }
        free(list);
        return (NULL);
}
char    **ft_split(char *s, char c)
{
    char **list;
    int word = count_word(s,c);
    list = (char **)malloc((word + 1) * sizeof(char*));
    if(!list)
        return NULL;

    int i =0;
    while (i < word)
    {
        while (*s == c && *s !='\0')
            s++;

        list[i] = ft_substr(s,0,length_word(s,c));
        s =s + length_word(s,c);
        if (list[i] == NULL)
            return (ft_free(list, i));
        i++;
    }
    list[i]=NULL;
    return list;
}

int     ft_atoi( char *str)
{
        int                                             i;
        int                                             s;
        //unsigned long long int  r;
        int  r;
        i = 0;
        s = 1;
        r = 0;
        while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
                i++;
        if (str[i] == '-' || str[i] == '+')
        {
                if (str[i] == '-')
                        s = s * (-1);
                i++;
        }
        while (str[i] >= 48 && str[i] <= 57)
        {
                r = (r * 10) + (str[i] - 48);
                // if (s == 1 && r > 9223372036854775807)
                //         return (-1);
                // if (s == (-1) && r > 9223372036854775807)
                //         return (0);
                i++;
        }
        return (r * s);
}
