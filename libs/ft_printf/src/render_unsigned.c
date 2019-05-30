/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   render_unsigned.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jterrazz <jterrazz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/15 17:19:23 by jterrazz          #+#    #+#             */
/*   Updated: 2017/06/04 10:52:42 by jterrazz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*render_unsigned(va_list *va, t_flags *flags)
{
	uintmax_t	n;
	char		*ret;

	n = get_uintmax(va, flags);
	if (!(ret = p_ft_uitoa_base(n, 10, 'a')))
		return (NULL);
	set_precision_number(&ret, flags, (n ? 0 : 1));
	return (ret);
}
