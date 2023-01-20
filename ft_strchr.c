/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wcatwoma <wcatwoma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 17:55:27 by wcatwoma          #+#    #+#             */
/*   Updated: 2020/12/29 22:31:18 by wcatwoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_strchr(const char *s, int c)
{
	char		chr;
	size_t		i;
	size_t		n;

	i = ft_strlen(s);
	n = 0;
	chr = c;
	while (n <= i)
	{
		if (s[n] == chr)
			return ((char *)s + n);
		n++;
	}
	return (NULL);
}
