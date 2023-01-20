/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wcatwoma <wcatwoma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/25 04:18:31 by wcatwoma          #+#    #+#             */
/*   Updated: 2020/12/25 04:25:08 by wcatwoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	long long	result;
	int			is_neg;

	while ((*str == '0') || (*str == ' ') || (*str >= '\t' && *str <= '\r'))
		++str;
	is_neg = 0;
	if (*str == '-' || *str == '+')
	{
		is_neg = (*str == '-');
		++str;
	}
	result = 0;
	while (result <= MAX_INT && *str >= '0' && *str <= '9')
	{
		result = result * 10 + *str - '0';
		++str;
	}
	if (is_neg)
		return ((-result < MIN_INT) ? 0 : -result);
	return ((result > MAX_INT) ? -1 : result);
}
