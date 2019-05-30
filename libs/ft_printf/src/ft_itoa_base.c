/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jterrazz <jterrazz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/22 16:50:44 by jterrazz          #+#    #+#             */
/*   Updated: 2019/05/02 23:50:31 by jterrazz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*p_ft_itoa_base(intmax_t nb, intmax_t base, char letter)
{
	if (nb < 0)
		return (p_ft_strjoin_free("-", p_ft_uitoa_base((nb * -1), base, letter),
			0, 1));
	else
		return (p_ft_uitoa_base(nb, base, letter));
}
