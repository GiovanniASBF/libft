/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaguiar- <gaguiar-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 14:05:33 by gaguiar-          #+#    #+#             */
/*   Updated: 2025/07/21 14:36:56 by gaguiar-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

int	ft_isalnum(int c);
int	ft_isalpha(int c);
int	ft_isascii(int c);
int	ft_isdigit(int c);
int	ft_isprint(int c);
int	ft_strlcat(char *dst, const char *src, int size);
int	ft_strlcpy(char *dst, const char *src, int size);
int	ft_strlen(const char *s);
int	ft_strncmp(const char *s1, const char *s2, int n);
int	ft_tolower(int c);
int	ft_toupper(int c);

#endif 