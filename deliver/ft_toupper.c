/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaguiar- <gaguiar-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 14:34:15 by gaguiar-          #+#    #+#             */
/*   Updated: 2025/07/19 14:46:09 by gaguiar-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (c - 32);
	}
	else
	{
		return (c);
	}
}

/*
If c is a lowercase letter, toupper() returns its uppercase equivalent,
	   if an uppercase representation exists in the  current  locale.   Other‐
	   wise,  it  returns c.

	   The value returned is that of the converted letter, or c if the conver‐
	   sion was not possible.

*/