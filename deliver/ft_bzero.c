/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaguiar- <gaguiar-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 11:11:28 by gaguiar-          #+#    #+#             */
/*   Updated: 2025/07/23 11:22:07 by gaguiar-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*aux;
	int				i;

	aux = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		aux[i] = '\0';
		i++;
	}
}

/*
The  bzero()  function  erases  the  data  in the n bytes of the memory starting at the location pointed to by s,
by writing zeros (bytes  containing '\0') to that area.
*/