/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jterrazz <jterrazz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/03 06:51:18 by jterrazz          #+#    #+#             */
/*   Updated: 2017/06/04 10:51:18 by jterrazz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void			set_precision_number(char **str, t_flags *flags, int is_null)
{
	int		len;
	char	*new_s;

	if (flags->flag_precision > 0)
	{
		len = flags->flag_precision - p_ft_strlen(*str) + (**str == '-' ? 1 : 0);
		if (len > 0)
		{
			if (!(new_s = p_ft_strnew(len)))
				return ;
			p_ft_memset(new_s, '0', len);
			if (**str == '-')
				*str = p_ft_strjoin_inside_free(new_s, *str, 1);
			else
				*str = p_ft_strjoin_free(new_s, *str, 1, 1);
		}
	}
	else if (!(flags->flag_precision) && is_null)
	{
		free(*str);
		*str = p_ft_strdup("");
	}
}

void			set_precision_str(char **str, t_flags *flags)
{
	if (flags->flag_precision > -1)
		*str = p_ft_strsub_free(*str, 0, flags->flag_precision);
}

static void		set_padding_next(char **str, t_flags *flags, int len)
{
	char	*new_s;

	if (!(new_s = p_ft_strnew(len)))
		return ;
	if (flags->flag_zero && !flags->flag_minus && !(flags->flag_precision > -1
		&& (flags->conv == 'd' || flags->conv == 'i' || flags->conv == 'o'
		|| flags->conv == 'u' || flags->conv == 'i' || flags->conv == 'x'
		|| flags->conv == 'X')))
		p_ft_memset(new_s, '0', len);
	else
		p_ft_memset(new_s, ' ', len);
	if (flags->flag_minus)
		*str = p_ft_strjoin_free(*str, new_s, 1, 1);
	else
	{
		if (*str && (*str[0] == '+' || *str[0] == '-' || *str[0] == ' ')
			&& flags->flag_zero)
			*str = p_ft_strjoin_inside_free(new_s, *str, 1);
		else if (flags->flag_zero && ((flags->conv == 'p')
			|| ((flags->conv == 'x' || flags->conv == 'X')
			&& flags->flag_hash)))
			*str = p_ft_strjoin_inside_free(new_s, *str, 2);
		else
			*str = p_ft_strjoin_free(new_s, *str, 1, 1);
	}
}

void			set_padding(char **str, t_flags *flags)
{
	int		len;

	if (flags->width < 0)
	{
		flags->width *= -1;
		flags->flag_minus = 1;
	}
	len = flags->width - p_ft_strlen(*str);
	if (flags->flag_width && len > 0)
		set_padding_next(str, flags, len);
}
