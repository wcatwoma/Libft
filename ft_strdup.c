/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wcatwoma <wcatwoma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 17:55:37 by wcatwoma          #+#    #+#             */
/*   Updated: 2020/12/29 22:35:18 by wcatwoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_strdup(char *src)
{
	size_t		i;
	size_t		strlen;
	char		*tmp;

	i = 0;
	strlen = ft_strlen(src);
	tmp = NULL;
	tmp = (char *)malloc(sizeof(char) * (strlen + 1));
	if (tmp == NULL)
		return (NULL);
	while (i < strlen)
	{
		tmp[i] = src[i];
		i++;
	}
	tmp[i] = '\0';
	return (tmp);
}
