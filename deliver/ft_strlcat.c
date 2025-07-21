/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaguiar- <gaguiar-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 14:16:22 by gaguiar-          #+#    #+#             */
/*   Updated: 2025/07/21 15:41:06 by gaguiar-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlcat(char *dst, const char *src, int size)
{
	int	dst_len;
	int	i;
	int	j;
	int	src_len;

	dst_len = ft_strlen(dst);
	i = dst_len;
	j = 0;
	src_len = ft_strlen(src);
	if (size > dst_len)
	{
		while (i < size - 1 && src[j])
		{
			dst[i] = src[j];
			i++;
			j++;
		}
		dst[i] = '\0';
		return (dst_len + src_len);
	}
	return (size + src_len);
}

/*
The strlcat() function appends the NUL-terminated string src to the end	of dst. 
It will append at most size - strlen(dst) - 1 bytes, 
-- Ele anexará no byte equivalente ao tamanho de strlen(dst) - 1, dessa forma ele começará a anexar no \0 --
NUL-terminating the result.

The strlcat() functions concatenate strings. 
strlcat() take the full size of the buffer (not just the length) 
and guarantee to NUL-terminate the result (as long as size is larger than 0 or, 
in the case of strlcat(), as long as there is at least one byte free in dst). 
Note that a byte for the NUL should be included in size. 
Also note that strlcat() only operate on true “C” strings. 
This means that for strlcat() both src and dst must be NUL-terminated.

The strlcat() function return the total length of the string they tried to create. 
For strlcat() that means the initial length of dst plus the length of src. 
While this may seem somewhat confusing, it was done to make truncation detection simple.

Note, however, that if strlcat() traverses size characters without finding a NUL, 
the length of the string is considered to be size and the destination string will not be NUL-terminated 
(since there was no space for the NUL).  This keeps strlcat() from running off the end of a string. 
In practice this should not happen (as it means that either size is incorrect 
or that dst is not a proper “C” string). 
The check exists to prevent potential security problems in incorrect code.
*/