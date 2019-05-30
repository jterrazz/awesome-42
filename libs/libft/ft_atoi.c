/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jterrazz <jterrazz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/13 15:31:24 by jterrazz          #+#    #+#             */
/*   Updated: 2017/04/16 15:26:23 by jterrazz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int i;
	int res;
	int is_neg;

	i = 0;
	res = 0;
	while (*(str + i) == '\t' || *(str + i) == ' ' || *(str + i) == '\f'
			|| *(str + i) == '\n' || *(str + i) == '\r' || *(str + i) == '\v')
		i++;
	if (*(str + i) == '-')
		is_neg = 1;
	if (*(str + i) == '-' || *(str + i) == '+')
		i++;
	while (*(str + i) && *(str + i) >= '0' && *(str + i) <= '9')
	{
		res *= 10;
		res += *(str + i) - '0';
		i++;
	}
	if (is_neg)
		res *= -1;
	return (res);
}
