/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaguiar- <gaguiar-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/26 14:50:55 by gaguiar-          #+#    #+#             */
/*   Updated: 2025/07/26 18:47:33 by gaguiar-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	check_memory(int i, char **str);
static	int	count_delimiter(char *str, char d);

char	**ft_split(char const *s, char c)
{
	int		i;
	int		numb_of_str;
	char	**res;

	i = 0;
	numb_of_str = count_delimiter((char *)s, c) + 1;
	res = (char **)malloc(sizeof(char) * ft_strlen(s) + 1);
	while (i < numb_of_str)
	{
		res[i] = (char *)malloc(sizeof(char) * ft_strlen(s));
		if (check_memory(i, res) == 0)
		{
			return (NULL);
		}
		res[i] = ft_strdup(s);
		s = s + ft_strlen(s);
		i++;
	}
	return (res);
}

static	int	check_memory(int i, char **str)
{
	if (str[i] == NULL)
	{
		while (i >= 0)
		{
			free(str[i]);
			i--;
		}
		return (0);
	}
	return (1);
}

static	int	count_delimiter(char *str, char d)
{
	size_t	count;
	size_t	i;
	size_t	str_len;

	count = 0;
	i = 0;
	str_len = ft_strlen(str);
	while (i < str_len - 1)
	{
		if (str[i] == d)
		{
			str[i] = '\0';
			count++;
		}
		i++;
	}
	if (str[i] == d)
		str[i] = '\0';
	return (count);
}

#include <stdio.h>
int	main(void)
{
	char *str = "C4i do cav4lo na m4nha de s4xta";
	char **res = ft_split(str, '4');
	int	i = 0;
	while (res[i])
	{
		printf("%s\n", res[i]);
		i++;
	}
}
/*
usar um ponteiro para guardar o inicio da string
percorrer até chegar no delimitador,
definit o len como a posição atual - a posição inicial
usar o strlcpy para guardar o conteúdo desse len, com esse start e len + 1 como final na variavel word







Allocates memory (using malloc(3)) and returns an
array of strings obtained by splitting ’s’ using
the character ’c’ as a delimiter. The array must
end with a NULL pointer.

A ideia vai ser contar quantas palavras vão ser geradas no total.
Para cada ocorrência do caractere delimitador
a string vai ser separada.
Uma ideia é substituir o delimitador por /0
Mas com isso vamos ter diferentes strings;
A ideia vai ser fazer uma lista com o numero de ocorrencias 
do caractere delimitador 

lembrar de usar o free para cada instancia do malloc caso dê errado
*/