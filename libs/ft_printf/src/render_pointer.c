/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   render_pointer.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jterrazz <jterrazz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/15 17:19:12 by jterrazz          #+#    #+#             */
/*   Updated: 2017/06/04 10:52:35 by jterrazz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*render_pointer(va_list *va, t_flags *flags)
{
	void	*p;
	long	adress;

	p = va_arg(*va, void *);
	adress = (unsigned long)p;
	flags->flag_hash = 1;
	return (render_hex_nb(adress, flags));
}
