/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaguiar- <gaguiar-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 16:01:33 by gaguiar-          #+#    #+#             */
/*   Updated: 2025/07/21 19:23:17 by gaguiar-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, int len)
{
	int		i;
	int		j;

	i = 0;
	if (!*little)
		return ((char *)big);
	while (big[i] && i < len)
	{
		j = 0;
		while (big[i + j] == little[j] && i + j < len
			&& big[i + j] && little[j])
		{
			j++;
		}
		if (little[j] == '\0')
		{
			return ((char *)&big[i]);
		}
		i++;
	}
	return (0);
}

/*

little[j] && big[i + j] && i + j < len && big[i + j] == little[j]


Preciso manter a posição de big
Vou usar iterador j para percorrer ambos as strings
j sempre vai começar com 0;
então i + j vai ser sempre a minha forma de garantir a iteração
dessa forma eu não preciso incrementar i
mantendo a posição de big guardada para o momento que eu encontrar
a correspondencia




The strnstr() function locates the first occurrence of the null-terminated string little in the string big, 
where not more than len characters are searched. 
Characters that appear after a ‘\0’ character are not searched. 

--
Localiza a primeira ocorrência da string 'little' dentro da string 'big'
onde não são pesquisados mais do que 'len' caracteres.
Caracteres que aparecerem após um caractere '\0' não são pesquisados.
--

If little is an empty string, big is returned; 
if little occurs nowhere in big, NULL is returned; 
otherwise a pointer to the first character of the first occurrence of little is returned.

----
Se little é uma string vazia, retorna big;
Se não houver ocorrência de little em big, retorna Null;
Do contrário, um ponteiro para o primeiro caractere da primeira ocorrência de little é retornado.
---

Preciso percorrer o big
devo percorrer enquanto big for diferente de \0 e enquanto i < len;
se algum dos caracteres bater com o começo do little
eu começo a verificar se os seguintes continuam batendo
*/