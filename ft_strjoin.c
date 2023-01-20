/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wcatwoma <wcatwoma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/25 03:29:10 by wcatwoma          #+#    #+#             */
/*   Updated: 2020/12/25 04:33:38 by wcatwoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	scroll(char *str, char const *s, int y)
{
	int		x;

	x = 0;
	while (s[x])
	{
		str[y] = s[x];
		y++;
		x++;
	}
	return (y);
}

char			*ft_strjoin(char const *s1, char const *s2)
{
	char		*str;
	size_t		len;

	if (!s1 || !s2)
		return (NULL);
	len = ft_strlen(s1) + ft_strlen(s2);
	if (!(str = malloc((sizeof(char *) * (len + 1)))))
		return (NULL);
	len = scroll(str, s1, 0);
	len = scroll(str, s2, len);
	str[len] = '\0';
	return (str);
}
