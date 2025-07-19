#include "libft.h"
#include <stdio.h>
#include <ctype.h>

int	main(void)
{
	char	t_isalnum;
	char	t_isalpha;
	char	t_isascii;
	char	t_isdigit;
	char	t_isprint;
	int		res;

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
	res = ft_isascii(t_isascii);
	printf("ft_isascii(): %i\n", res);

	//ft_isprint()
	t_isprint = '\0';
	res = ft_isprint(t_isprint);
	printf("ft_isprint(): %i\n", res);
}
