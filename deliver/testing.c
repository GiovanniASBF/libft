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

	//ft_bzero()
	i = 0;
	size = 4;
	int str_bzero[8] = {1, 2, 3, 4, 5, 6, 7, 8};
	printf("before bzero: \n");
	while (i < 8)
	{
		printf("%d\n", str_bzero[i]);
		i++;
	}
	printf("\n");
	ft_bzero(str_bzero, 4 * sizeof(int));
	printf("after bzero: \n");
	i = 0;
	while (i < 8)
	{
		printf("%d\n", str_bzero[i]);
		i++;
	}
	printf("\n");

	//ft_memcpy()
	i = 0;
	size = 4;
	int str_src[8] = {1, 2, 3, 4, 5, 6, 7, 8};
	int str_dst[8] = {10, 20, 30, 40, 50, 60, 70, 80};
	printf("before ft_memcpy: \n");
	while (i < 8)
	{
		printf("%d\n", str_dst[i]);
		i++;
	}
	printf("\n");
	ft_memcpy(str_dst, str_src, 6 * sizeof(int));
	printf("after ft_memcpy: \n");
	i = 0;
	while (i < 8)
	{
		printf("%d\n", str_dst[i]);
		i++;
	}
	printf("\n");

	//ft_memmove()
	i = 0;
	size = 4;
	int str_srcm[8] = {1, 2, 3, 4, 5, 6, 7, 8};
	int str_dstm[8] = {10, 20, 30, 40, 50, 60, 70, 80};
	printf("before ft_memmove: \n");
	while (i < 8)
	{
		printf("%d\n", str_dstm[i]);
		i++;
	}
	printf("\n");
	ft_memmove(str_dstm, str_srcm, 6 * sizeof(int));
	printf("after ft_memmove: \n");
	i = 0;
	while (i < 8)
	{
		printf("%d\n", str_dstm[i]);
		i++;
	}
	printf("\n");

	//ft_strchr()
	test_str = "adventure";
	char test_char = 'v';
	str = ft_strchr(test_str, test_char);
	printf("ft_strchr(): \n");
	printf("string: %s\n", str);
	printf("\n");

	//ft_strrchr()
	test_str = "adventuvre";
	test_char = 'v';
	str = ft_strrchr(test_str, test_char);
	printf("ft_strrchr(): \n");
	printf("string: %s\n", str);
	printf("\n");

	//ft_memchr()
	test_str = "adventure";
	test_char = 'v';
	size = 4;
	str = ft_memchr(test_str, test_char, size);
	printf("ft_memchr(): \n");
	printf("string: %s\n", str);
	printf("\n");

	//ft_memcmp()
	test_str = "abcd";
	test_str2 = "abcda";
	res_digit = ft_memcmp(test_str, test_str2, 5);
	printf("ft_memcmp(): %i\n", res_digit);
	printf("\n");
}
