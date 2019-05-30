/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_uitoa_base.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jterrazz <jterrazz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/22 16:50:44 by jterrazz          #+#    #+#             */
/*   Updated: 2019/05/02 23:51:25 by jterrazz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*p_ft_uitoa_base(uintmax_t nb, intmax_t base, char letter)
{
	uintmax_t	temp;
	int			power;
	char		*str;

	temp = nb;
	power = 1;
	while (temp /= base)
		power++;
	if (!(str = p_ft_strnew(power)))
		return (NULL);
	while (power--)
	{
		if (nb % base >= 10)
			str[power] = nb % base - 10 + letter;
		else
			str[power] = nb % base + '0';
		nb /= base;
	}
	return (str);
}
