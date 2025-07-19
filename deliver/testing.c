#include "libft.h"
#include <stdio.h>
#include <ctype.h>

int main(void)
{
    int     res;
    char    t_isalpha;
    char    t_isdigit;
    char    t_alnum;

    t_isalpha = 'F';
    res = ft_isalpha(t_isalpha);
    printf("result: %i\n", res);

    t_isdigit = '2';
    res = ft_isdigit(t_isdigit);
    printf("result: %i\n", res);

    t_alnum = '!';
    res = ft_isalnum(t_alnum);
    printf("result: %i\n", res);
}
