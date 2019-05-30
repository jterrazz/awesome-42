/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   render_nbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jterrazz <jterrazz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/12 13:37:55 by jterrazz          #+#    #+#             */
/*   Updated: 2017/06/04 10:52:26 by jterrazz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*render_nbr(va_list *va, t_flags *flags)
{
	intmax_t	n;
	char		*ret;

	n = get_intmax(va, flags);
	if (!(ret = p_ft_itoa_base(n, 10, 'a')))
		return (NULL);
	set_precision_number(&ret, flags, (n ? 0 : 1));
	if (flags->flag_plus && ret[0] != '-')
		ret = p_ft_strjoin_free("+", ret, 0, 1);
	else if (flags->flag_space && ret[0] != '-')
		ret = p_ft_strjoin_free(" ", ret, 0, 1);
	return (ret);
}
