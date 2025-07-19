#include "libft.h"
#include <stdio.h>
#include <ctype.h>

int	main(void)
{
	int		res;
	char	t_isalpha;
	char	t_isdigit;
	char	t_isalnum;
	char	t_isascii;

    //ft_isalpha()
	t_isalpha = 'F';
	res = ft_isalpha(t_isalpha);
	printf("ft_isalpha(): %i\n", res);

    //ft_isdigit()
	t_isdigit = '2';
	res = ft_isdigit(t_isdigit);
	printf("ft_isdigit(): %i\n", res);

    //ft_isalnum()
	t_isalnum = '!';
	res = ft_isalnum(t_isalnum);
	printf("ft_isalnum(): %i\n", res);

    //ft_isascii()
	t_isascii = '~';
	res = isascii(t_isascii);
	printf("isascii(): %i\n", res);
}
