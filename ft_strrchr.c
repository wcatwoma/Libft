/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wcatwoma <wcatwoma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 17:48:40 by wcatwoma          #+#    #+#             */
/*   Updated: 2020/11/30 17:48:43 by wcatwoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *string, int c)
{
	size_t i;

	i = ft_strlen(string);
	while (i > 0)
	{
		if (string[i] == c)
			return ((char *)(string + i));
		--i;
	}
	return ((string[i] == c) ? (char *)(string + i) : NULL);
}
