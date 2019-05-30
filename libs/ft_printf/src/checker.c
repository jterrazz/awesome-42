/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jterrazz <jterrazz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/03 06:39:00 by jterrazz          #+#    #+#             */
/*   Updated: 2017/06/04 10:50:47 by jterrazz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int			is_conv(char c)
{
	char *str;

	str = CONVERSIONS;
	while (*str)
	{
		if (*str == c)
			return (1);
		str++;
	}
	return (0);
}

int			is_flag(char c)
{
	char *str;

	str = FLAGS;
	while (*str)
	{
		if (*str == c)
			return (1);
		str++;
	}
	return (0);
}
