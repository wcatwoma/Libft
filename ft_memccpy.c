/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wcatwoma <wcatwoma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/25 05:16:06 by wcatwoma          #+#    #+#             */
/*   Updated: 2020/12/25 05:37:45 by wcatwoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned char	*dest_n;
	unsigned char	*src_n;
	size_t			i;

	dest_n = (unsigned char *)dest;
	src_n = (unsigned char *)src;
	i = 0;
	while (i < n)
	{
		dest_n[i] = src_n[i];
		if (dest_n[i] == (unsigned char)c)
			return ((void*)(dest + i + 1));
		++i;
	}
	return (NULL);
}
