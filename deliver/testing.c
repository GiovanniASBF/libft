#include "libft.h"
#include <stdio.h>
#include <ctype.h>
#include <string.h>
//#include <bsd/string.h>

int	main(void)
{
	char	test_var;
	char	*test_str;
	char	*test_str2;
	int		res_digit;
	int		res_char;
	int	size;
	int i;

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

	//ft_strlcpy()
	size = 4;
	char	test_strlcpy[8];
	test_str = "bizarre";
	res_digit = ft_strlcpy(test_strlcpy, test_str, size);
	printf("ft_strlcpy(): \n");
	if (size > 0)
	{
		printf("destiny: %s \n", test_strlcpy);
	}
	printf("src length: %i\n", res_digit);

	//ft_strlcat()
	size = 18;
	char test_strlcat[18] = "bizarre ";
	test_str = "adventure";
	res_digit = ft_strlcat(test_strlcat, test_str, size);
	printf("ft_strlcat(): \n");
	if (size > 0)
	{
		printf("destiny: %s \n", test_strlcat);
	}
	printf("ideal length: %i\n", res_digit);

	//ft_strnstr()
	size = 4;
	test_str = "adventure";
	test_str2 = "ventu";
	char *str = ft_strnstr(test_str, test_str2, size);
	printf("ft_strnstr(): \n");
	printf("string: %s\n", str);

	//ft_memset()
	i = 0;
	size = 4;
	int str_memset[8];
	ft_memset(str_memset, size, 8 * sizeof(int));
	printf("memset(): \n");
	while (i < 8)
	{
		printf("%d\n", str_memset[i]);
		i++;
	}
	printf("\n");
}
