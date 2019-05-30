/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   render_hex.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jterrazz <jterrazz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/15 17:19:12 by jterrazz          #+#    #+#             */
/*   Updated: 2017/06/04 10:52:24 by jterrazz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*render_hex_nb(uintmax_t nb, t_flags *flags)
{
	char *ret;

	if (flags->conv == 'X')
		ret = p_ft_uitoa_base(nb, 16, 'A');
	else
		ret = p_ft_uitoa_base(nb, 16, 'a');
	if (!ret)
		return (NULL);
	set_precision_number(&ret, flags, (nb ? 0 : 1));
	if (flags->flag_hash && !(nb == 0 && flags->conv != 'p'))
		ret = p_ft_strjoin_free((flags->conv == 'X' ? "0X" : "0x"), ret, 0, 1);
	return (ret);
}

char	*render_hex(va_list *va, t_flags *flags)
{
	uintmax_t	nb;

	nb = get_uintmax(va, flags);
	return (render_hex_nb(nb, flags));
}
