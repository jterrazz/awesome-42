/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   render_char.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jterrazz <jterrazz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/04 07:55:47 by jterrazz          #+#    #+#             */
/*   Updated: 2017/06/04 10:52:18 by jterrazz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*render_char_from_c(char c)
{
	char *str;

	str = p_ft_strnew(1);
	str[0] = c;
	return (str);
}

char	*render_wchar_from_c(wchar_t c)
{
	char	*str;

	if (c <= 255)
		str = render_char_from_c((char)c);
	else
		str = NULL;
	return (str);
}

char	*render_char(va_list *va, t_flags *flags)
{
	char		c;
	wchar_t		wc;

	if (flags->conv == 'C' || flags->data_type == l)
	{
		wc = (wchar_t)va_arg(*va, wint_t);
		if (!wc)
		{
			flags->null = 1;
			return (NULL);
		}
		return (render_wchar_from_c(wc));
	}
	else
	{
		c = (char)va_arg(*va, int);
		if (!c)
		{
			flags->null = 1;
			return (NULL);
		}
		return (render_char_from_c(c));
	}
}
