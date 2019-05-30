/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   render_octal.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jterrazz <jterrazz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/15 16:41:09 by jterrazz          #+#    #+#             */
/*   Updated: 2017/06/04 10:52:32 by jterrazz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*render_octal(va_list *va, t_flags *flags)
{
	char		*ret;
	uintmax_t	nb;

	nb = get_uintmax(va, flags);
	if (!(ret = p_ft_uitoa_base(nb, 8, 'a')))
		return (NULL);
	set_precision_number(&ret, flags, (nb ? 0 : 1));
	if (ret && flags->flag_hash && ret[0] != '0')
		ret = p_ft_strjoin_free("0", ret, 0, 1);
	return (ret);
}
