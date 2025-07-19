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
	char	t_toupper;
	int		resDigit;
	int		resChar;

    //ft_isalpha()
	t_isalpha = 'F';
	resDigit = ft_isalpha(t_isalpha);
	printf("ft_isalpha(): %i\n", resDigit);

    //ft_isdigit()
	t_isdigit = '2';
	resDigit = ft_isdigit(t_isdigit);
	printf("ft_isdigit(): %i\n", resDigit);

    //ft_isalnum()
	t_isalnum = '!';
	resDigit = ft_isalnum(t_isalnum);
	printf("ft_isalnum(): %i\n", resDigit);

    //ft_isascii()
	t_isascii = '~';
	resDigit = ft_isascii(t_isascii);
	printf("ft_isascii(): %i\n", resDigit);

	//ft_isprint()
	t_isprint = '\0';
	resDigit = ft_isprint(t_isprint);
	printf("ft_isprint(): %i\n", resDigit);

	//ft_toupper()
	t_toupper = ')';
	resChar = ft_toupper(t_toupper);
	printf("ft_toupper(): %c\n", resChar);
}
