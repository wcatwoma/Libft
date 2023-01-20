/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wcatwoma <wcatwoma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/25 05:46:30 by wcatwoma          #+#    #+#             */
/*   Updated: 2020/12/25 06:18:50 by wcatwoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *destptr, const void *srcptr, size_t num)
{
	unsigned int	i;
	unsigned char	*dest;
	unsigned char	*str;

	i = 0;
	if (destptr == NULL && srcptr == NULL)
		return (NULL);
	dest = (unsigned char *)destptr;
	str = (unsigned char *)srcptr;
	if (!num || destptr == srcptr)
		return (destptr);
	while (i < num)
	{
		*(dest + i) = *(str + i);
		++i;
	}
	return (destptr);
}
