/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wcatwoma <wcatwoma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/25 04:59:23 by wcatwoma          #+#    #+#             */
/*   Updated: 2020/12/29 20:29:09 by wcatwoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	size_t	ft_words(char const *s, char c)
{
	int			words;
	int			i;

	i = 0;
	words = 0;
	while (s[i])
	{
		if (s[i] != c && (s[i + 1] == '\0' || s[i + 1] == c))
			words++;
		i++;
	}
	return (words);
}

static	char	**ft_free(char **s)
{
	size_t		i;

	i = 0;
	while (s[i])
		free(s[i++]);
	free(s);
	return (NULL);
}

static	char	**ft_spwrite(char **str, char const *s, char c, size_t words)
{
	size_t		symbol;
	size_t		num_w;
	size_t		len;

	symbol = 0;
	num_w = 0;
	while (num_w < words)
	{
		while (s[symbol] && s[symbol] == c)
			symbol++;
		len = symbol;
		while (s[symbol] && s[symbol] != c)
			symbol++;
		if (!(str[num_w] = ft_substr(s, len, symbol - len)))
			return (ft_free(str));
		symbol++;
		num_w++;
	}
	str[words] = NULL;
	return (str);
}

char			**ft_split(char const *s, char c)
{
	char		**str;
	size_t		words;

	if (!s)
		return (NULL);
	words = ft_words(s, c);
	if (!(str = malloc((sizeof(char *) * (words + 1)))))
		return (NULL);
	return (ft_spwrite(str, s, c, words));
}
