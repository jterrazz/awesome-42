/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flags.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jterrazz <jterrazz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/04 09:23:15 by jterrazz          #+#    #+#             */
/*   Updated: 2017/06/04 10:51:23 by jterrazz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int		set_flags_precision(t_flags *flags, char **str, va_list *va)
{
	if (**str == '.')
	{
		(*str)++;
		flags->flag_precision = 0;
		if (**str == '*')
		{
			flags->flag_precision = va_arg(*va, int);
			(*str)++;
		}
		else
			flags->flag_precision = p_ft_atoi(str);
		return (1);
	}
	else if (**str >= '1' && **str <= '9')
	{
		flags->width = p_ft_atoi(str);
		return (flags->flag_width = 1);
	}
	else if (**str == '*')
	{
		flags->width = va_arg(*va, int);
		(*str)++;
		return (flags->flag_width = 1);
	}
	return (0);
}

static int		set_flags_next(t_flags *flags, char **str)
{
	if (**str == '#')
		flags->flag_hash = 1;
	else if (**str == '0')
		flags->flag_zero = 1;
	else if (**str == '-')
		flags->flag_minus = 1;
	else if (**str == '+')
		flags->flag_plus = 1;
	else if (**str == ' ')
		flags->flag_space = 1;
	else
		return (0);
	return (1);
}

static int		set_flags_size(t_flags *flags, char **str)
{
	if (**str == 'h' && *(*str + 1) == 'h' && flags->data_type < 1)
	{
		(*str)++;
		flags->data_type = hh;
	}
	else if (**str == 'h' && flags->data_type < 2)
		flags->data_type = h;
	else if (**str == 'z' && flags->data_type < 6)
		flags->data_type = z;
	else if (**str == 'j' && flags->data_type < 5)
		flags->data_type = j;
	else if (**str == 'l' && *(*str + 1) == 'l' && flags->data_type < 4)
	{
		flags->data_type = ll;
		(*str)++;
	}
	else if (**str == 'l' && flags->data_type < 3)
		flags->data_type = l;
	else
		return (0);
	return (1);
}

int				set_flags(t_flags *flags, char **str, va_list *va)
{
	set_flags_to_null(flags);
	while (**str && !is_conv(**str) && is_flag(**str))
	{
		if (set_flags_size(flags, str) || set_flags_next(flags, str))
			(*str)++;
		else if (!set_flags_precision(flags, str, va))
			(*str)++;
	}
	if (is_conv(**str))
		return (1);
	else if (**str)
		return (0);
	return (-1);
}
