/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jterrazz <jterrazz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/13 15:31:24 by jterrazz          #+#    #+#             */
/*   Updated: 2019/05/02 23:50:25 by jterrazz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	p_ft_atoi(char **str)
{
	int res;
	int is_neg;

	res = 0;
	is_neg = 0;
	while (**str == '\t' || **str == ' ' || **str == '\f'
			|| **str == '\n' || **str == '\r' || **str == '\v')
		(*str)++;
	if (**str == '-')
		is_neg = 1;
	if (**str == '-' || **str == '+')
		(*str)++;
	while (**str && **str >= '0' && **str <= '9')
	{
		res *= 10;
		res += **str - '0';
		(*str)++;
	}
	if (is_neg)
		res *= -1;
	return (res);
}
