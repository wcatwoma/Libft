/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wcatwoma <wcatwoma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 17:57:03 by wcatwoma          #+#    #+#             */
/*   Updated: 2020/12/29 22:23:53 by wcatwoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int					ft_memcmp(const void *dest, const void *src, size_t n)
{
	unsigned char	*dest_1;
	unsigned char	*src_1;
	size_t			i;

	i = 0;
	dest_1 = (unsigned char *)dest;
	src_1 = (unsigned char *)src;
	while (i < n)
	{
		if (*dest_1 == *src_1)
		{
			dest_1++;
			src_1++;
		}
		else
			return (*dest_1 - *src_1);
		i++;
	}
	return (0);
}
