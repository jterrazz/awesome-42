/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flags_init.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jterrazz <jterrazz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/03 06:49:33 by jterrazz          #+#    #+#             */
/*   Updated: 2017/06/04 10:51:21 by jterrazz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	set_flags_to_null(t_flags *flags)
{
	flags->data_type = none;
	flags->conv = 0;
	flags->flag_hash = 0;
	flags->flag_zero = 0;
	flags->flag_minus = 0;
	flags->flag_plus = 0;
	flags->flag_space = 0;
	flags->null = 0;
	flags->flag_width = 0;
	flags->width = 0;
	flags->flag_precision = -1;
}
