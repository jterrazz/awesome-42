/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   render_str.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jterrazz <jterrazz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/04 09:20:45 by jterrazz          #+#    #+#             */
/*   Updated: 2017/06/04 10:52:38 by jterrazz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static char		*make_wchar_str(wchar_t *w_str, t_flags *flags)
{
	char	*str;
	char	*temp;

	if (flags->flag_precision == 0)
		return (p_ft_strdup(""));
	if ((str = render_wchar_from_c(*w_str)) == NULL)
		return (NULL);
	temp = str;
	if (!(*str))
		return (str);
	w_str++;
	while (*w_str && *temp)
	{
		if ((temp = render_wchar_from_c(*w_str)) == NULL)
			return (NULL);
		str = p_ft_strjoin_free(str, temp, 1, 1);
		w_str++;
	}
	return (str);
}

char			*render_str(va_list *va, t_flags *flags)
{
	char		*str;
	wchar_t		*w_str;

	if (flags->conv == 'S' || flags->data_type == l)
	{
		w_str = (wchar_t *)va_arg(*va, wint_t *);
		if (!w_str)
			str = p_ft_strdup("(null)");
		else
			str = make_wchar_str(w_str, flags);
	}
	else
	{
		str = (char *)va_arg(*va, char *);
		if (!str)
			str = p_ft_strdup("(null)");
		else
			str = p_ft_strdup(str);
	}
	if (str)
		set_precision_str(&str, flags);
	return (str);
}
