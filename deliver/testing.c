#include "libft.h"
#include <stdio.h>
#include <ctype.h>

int main(void)
{
    int res;
    char t_isalpha;
    char    t_isdigit;

    t_isalpha = 'F';
    res = ft_isalpha(t_isalpha);
    printf("result: %i\n", res);

    t_isdigit = '2';
    res = ft_isdigit(t_isdigit);
    printf("result: %i\n", res);
}
