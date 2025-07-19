#include "libft.h"
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int	main(void)
{
	char	test_var;
	char	*test_str;
	char	*test_str2;
	int		res_digit;
	int		res_char;

    //ft_isalpha()
	test_var = 'F';
	res_digit = ft_isalpha(test_var);
	printf("ft_isalpha(): %i\n", res_digit);

    //ft_isdigit()
	test_var = '2';
	res_digit = ft_isdigit(test_var);
	printf("ft_isdigit(): %i\n", res_digit);

    //ft_isalnum()
	test_var = '!';
	res_digit = ft_isalnum(test_var);
	printf("ft_isalnum(): %i\n", res_digit);

    //ft_isascii()
	test_var = '~';
	res_digit = ft_isascii(test_var);
	printf("ft_isascii(): %i\n", res_digit);

	//ft_isprint()
	test_var = '\0';
	res_digit = ft_isprint(test_var);
	printf("ft_isprint(): %i\n", res_digit);

	//ft_toupper()
	test_var = ')';
	res_char = ft_toupper(test_var);
	printf("ft_toupper(): %c\n", res_char);

	//ft_tolower()
	test_var = 'H';
	res_char = ft_tolower(test_var);
	printf("ft_tolower(): %c\n", res_char);

	//ft_strlen()
	test_str = "Cinco  8";
	res_digit = ft_strlen(test_str);
	printf("ft_strlen(): %i\n", res_digit);

	//ft_strncmp()
	test_str = "abcd";
	test_str2 = "abcda";
	res_digit = ft_strncmp(test_str, test_str2, 3);
	printf("ft_strncmp(): %i\n", res_digit);
}
