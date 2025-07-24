/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaguiar- <gaguiar-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 15:24:02 by gaguiar-          #+#    #+#             */
/*   Updated: 2025/07/24 15:24:04 by gaguiar-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	number;
	int	sign;

	number = 0;
	sign = 1;
	while ((*nptr >= 9 && *nptr <= 13) || *nptr == 32)
	{
		nptr++;
	}
	if (*nptr == '+' || *nptr == '-')
	{
		if (*nptr == '-')
		{
			sign = -sign;
		}
		nptr++;
	}
	while (*nptr >= 48 && *nptr <= 57)
	{
		number = number * 10 + (*nptr - '0');
		nptr++;
	}
	return (sign * number);
}
/*
The  atoi() function converts the initial portion of the string pointed
       to by nptr to int.  The behavior is the same as

           strtol(nptr, NULL, 10);
		   The  strtol()  function converts the initial part of the string in nptr
       to a long integer value according to the given base, which must be  be‐
       tween 2 and 36 inclusive, or be the special value 0.

       The string may begin with an arbitrary amount of white space (as deter‐
       mined by isspace(3)) followed by a single optional '+' or '-' sign.  If
       base  is zero or 16, the string may then include a "0x" or "0X" prefix,
       and the number will be read in base 16; otherwise, a zero base is taken
       as  10  (decimal) unless the next character is '0', in which case it is
       taken as 8 (octal).

       The remainder of the string is converted to a long value in the obvious
       manner,  stopping  at the first character which is not a valid digit in
       the given base.  (In bases above 10, the letter 'A' in either uppercase
       or  lowercase  represents 10, 'B' represents 11, and so forth, with 'Z'
       representing 35.)

       If endptr is not NULL, strtol() stores the address of the first invalid
       character  in *endptr.  If there were no digits at all, strtol() stores
       the original value of nptr in *endptr (and returns 0).  In  particular,
       if  *nptr is not '\0' but **endptr is '\0' on return, the entire string
       is valid.


       except that atoi() does not detect errors.

Return
The converted value or 0 on error.	   
*/