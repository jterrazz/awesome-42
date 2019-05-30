/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conv_init.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jterrazz <jterrazz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/04 10:37:25 by jterrazz          #+#    #+#             */
/*   Updated: 2017/06/04 10:51:12 by jterrazz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	set_conv_tab_next(t_conv *conv_tab)
{
	conv_tab[8].index = 'o';
	conv_tab[8].fn = &render_octal;
	conv_tab[9].index = 'O';
	conv_tab[9].fn = &render_octal;
	conv_tab[10].index = 'u';
	conv_tab[10].fn = &render_unsigned;
	conv_tab[11].index = 'U';
	conv_tab[11].fn = &render_unsigned;
	conv_tab[12].index = 'x';
	conv_tab[12].fn = &render_hex;
	conv_tab[13].index = 'X';
	conv_tab[13].fn = &render_hex;
	conv_tab[14].index = 'f';
	conv_tab[14].fn = &render_double;
	conv_tab[15].index = 'F';
	conv_tab[15].fn = &render_double;
}

void	set_conv_tab(t_conv *conv_tab)
{
	conv_tab[0].index = 's';
	conv_tab[0].fn = &render_str;
	conv_tab[1].index = 'c';
	conv_tab[1].fn = &render_char;
	conv_tab[2].index = 'S';
	conv_tab[2].fn = &render_str;
	conv_tab[3].index = 'C';
	conv_tab[3].fn = &render_char;
	conv_tab[4].index = 'p';
	conv_tab[4].fn = &render_pointer;
	conv_tab[5].index = 'd';
	conv_tab[5].fn = &render_nbr;
	conv_tab[6].index = 'D';
	conv_tab[6].fn = &render_nbr;
	conv_tab[7].index = 'i';
	conv_tab[7].fn = &render_nbr;
	set_conv_tab_next(conv_tab);
}
