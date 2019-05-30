/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_uintmax.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jterrazz <jterrazz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/24 18:18:12 by jterrazz          #+#    #+#             */
/*   Updated: 2017/06/04 10:52:15 by jterrazz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

uintmax_t	get_uintmax(va_list *va, t_flags *flags)
{
	uintmax_t nb;

	if (flags->conv == 'O' || flags->conv == 'U')
		nb = (unsigned long)va_arg(*va, unsigned long);
	else if (flags->data_type == z)
		nb = (size_t)va_arg(*va, size_t);
	else if (flags->data_type == j)
		nb = (uintmax_t)va_arg(*va, uintmax_t);
	else if (flags->data_type == ll)
		nb = (unsigned long long)va_arg(*va, unsigned long long);
	else if (flags->data_type == l)
		nb = (unsigned long)va_arg(*va, unsigned long);
	else if (flags->data_type == h)
		nb = (unsigned short)va_arg(*va, unsigned int);
	else if (flags->data_type == hh)
		nb = (unsigned char)va_arg(*va, unsigned int);
	else
		nb = (unsigned int)va_arg(*va, int);
	return (nb);
}
