/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wcatwoma <wcatwoma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 17:48:35 by wcatwoma          #+#    #+#             */
/*   Updated: 2020/12/29 22:33:28 by wcatwoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		cnt;
	int		i;
	char	*result;

	if (!s1)
		return (NULL);
	else if (!set)
		return ((char *)s1);
	while (*s1 && ft_strchr(set, *s1))
		++s1;
	cnt = ft_strlen(s1);
	while (s1[cnt] != *s1 && ft_strchr(set, s1[cnt]))
		--cnt;
	result = ft_calloc(++cnt + 1, sizeof(char));
	if (result == NULL)
		return (NULL);
	i = -1;
	while (++i < cnt)
		result[i] = s1[i];
	result[i] = '\0';
	return (result);
}
