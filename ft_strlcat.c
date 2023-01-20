/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wcatwoma <wcatwoma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/25 08:13:39 by wcatwoma          #+#    #+#             */
/*   Updated: 2020/12/25 10:46:54 by wcatwoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t temp;
	size_t i;
	size_t j;

	i = 0;
	while (dst[i] && i < size)
		++i;
	j = i;
	temp = i;
	i = 0;
	while (src[i] && (j + 1) < size)
		dst[j++] = src[i++];
	if (temp < size)
		dst[j] = '\0';
	return (temp + ft_strlen(src));
}
