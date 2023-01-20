/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wcatwoma <wcatwoma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/26 19:09:48 by wcatwoma          #+#    #+#             */
/*   Updated: 2020/12/26 19:10:00 by wcatwoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char *str;
	unsigned int		i;

	str = (unsigned char *)s;
	i = 0;
	while (i < n && str[i] != (unsigned char)c)
		++i;
	if (i == n)
		return (NULL);
	return ((void *)&str[i]);
}
