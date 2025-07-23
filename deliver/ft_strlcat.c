/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaguiar- <gaguiar-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 14:16:22 by gaguiar-          #+#    #+#             */
/*   Updated: 2025/07/23 11:24:14 by gaguiar-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlcat(char *dst, const char *src, size_t size)
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
