/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_intmax.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jterrazz <jterrazz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/24 18:40:48 by jterrazz          #+#    #+#             */
/*   Updated: 2017/06/04 10:52:12 by jterrazz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

intmax_t	get_intmax(va_list *va, t_flags *flags)
{
	intmax_t nb;

	if (flags->conv == 'D')
		nb = (long)va_arg(*va, long);
	else if (flags->data_type == z)
		nb = (size_t)va_arg(*va, size_t);
	else if (flags->data_type == j)
		nb = (intmax_t)va_arg(*va, intmax_t);
	else if (flags->data_type == ll)
		nb = (long long)va_arg(*va, long long);
	else if (flags->data_type == l)
		nb = (long)va_arg(*va, long);
	else if (flags->data_type == h)
		nb = (short)va_arg(*va, int);
	else if (flags->data_type == hh)
		nb = (signed char)va_arg(*va, int);
	else
		nb = (int)va_arg(*va, int);
	return (nb);
}
