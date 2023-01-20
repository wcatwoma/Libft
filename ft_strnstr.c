/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wcatwoma <wcatwoma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/25 08:18:16 by wcatwoma          #+#    #+#             */
/*   Updated: 2020/12/26 22:19:51 by wcatwoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static int	*get_prefix_func(const char *line)
{
	size_t	len;
	size_t	j;
	size_t	i;
	int		*pi;
	int		k;

	len = ft_strlen(line);
	pi = (int *)malloc(len * sizeof(int));
	j = 0;
	while (j < len)
		pi[j++] = 0;
	i = 1;
	while (i < len)
	{
		k = pi[i - 1];
		while (k > 0 && line[i] != line[k])
			k = pi[k - 1];
		if (line[i] == line[k])
			pi[i] = k + 1;
		++i;
	}
	return (pi);
}

static char	*concat_lines(const char *line1, const char *line2)
{
	char	*res;
	size_t	i;

	res = (char *)malloc(ft_strlen(line1) + ft_strlen(line2) + 2);
	i = 0;
	while (line1 && *line1)
		res[i++] = *(line1++);
	res[i++] = '#';
	while (line2 && *line2)
		res[i++] = *(line2++);
	res[i] = '\0';
	return (res);
}

char		*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	size_t	to_find_len;
	size_t	res_len;
	size_t	i;
	char	*res;
	int		*pi;

	if (!*to_find)
		return (char *)(str);
	res = concat_lines(to_find, str);
	res_len = ft_strlen(res);
	pi = get_prefix_func(res);
	to_find_len = ft_strlen(to_find);
	i = ft_strlen(to_find) + 1;
	while (i < res_len && len--)
	{
		if ((size_t)pi[i] == to_find_len)
		{
			free(pi);
			free(res);
			return (char *)(str + i - 2 * ft_strlen(to_find));
		}
		++i;
	}
	free(pi);
	return (NULL);
}
