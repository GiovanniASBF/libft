/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaguiar- <gaguiar-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 18:32:34 by gaguiar-          #+#    #+#             */
/*   Updated: 2025/07/22 18:33:29 by gaguiar-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, int n)
{
	int	i;
	unsigned char	*aux;

	aux = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		aux[i] = c;
		i++;
	}
	return (s);
}

/*
The  memset()  function  fills  the  first  n  bytes of the memory area
pointed to by s with the constant byte c.

The memset() function returns a pointer to the memory area s.

So
there's a pointer to a memory area received as an argument.
We fill the number of bytes passed also as argument of that memory area
with the byte received also as argument

Tem um espaço de memória 
Eu recebo o que eu vou usar pra preencher
E o tanto que eu quero preencher

Como percorrer o espaço de memória:

*/