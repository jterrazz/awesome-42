/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dispatch.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jterrazz <jterrazz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/11 17:42:36 by jterrazz          #+#    #+#             */
/*   Updated: 2017/06/04 10:51:15 by jterrazz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	print_null(t_flags *flags)
{
	int i;

	i = 1;
	if (flags->flag_width == 1 && flags->width > 0)
	{
		while (--(flags->width) && i++)
			write(1, flags->flag_zero ? "0" : " ", 1);
	}
	if (flags->conv == 'c' || flags->conv == 'C')
		write(1, "\0", 1);
	if (flags->flag_width == 1 && flags->width < 0)
	{
		flags->width *= -1;
		while (--(flags->width) && i++)
			write(1, flags->flag_zero ? "0" : " ", 1);
	}
	return (i);
}

static void	get_str_ret(char **str_ret, va_list *va, t_flags *flags, char **str)
{
	t_conv	conv_tab[16];
	int		i;

	i = 0;
	set_conv_tab(conv_tab);
	while (i < 16)
	{
		if (conv_tab[i].index == **str)
		{
			*str_ret = conv_tab[i].fn(va, flags);
			return ;
		}
		i++;
	}
	if (**str == '%')
		*str_ret = render_char_from_c('%');
}

static int	handle_null(char *str_ret, char buff[4096], int *i, t_flags *flags)
{
	if (str_ret)
		free(str_ret);
	return (print_buff(buff, i) + print_null(flags));
}

int			dispatch(va_list *va, char **str, char buff[4096], int *buff_i)
{
	t_flags	flags;
	char	*str_ret;
	int		ret;

	if ((ret = set_flags(&flags, str, va)) == -1)
		return (0);
	flags.conv = **str;
	if (ret == 0)
	{
		if (!(str_ret = p_ft_memset(p_ft_strnew(1), **str, 1)))
			return (0);
	}
	else
		get_str_ret(&str_ret, va, &flags, str);
	if (flags.null)
		return (handle_null(str_ret, buff, buff_i, &flags));
	else if (!str_ret && (flags.conv == 'C' || flags.conv == 'S'
	|| (flags.data_type == l && (flags.conv == 'c' || flags.conv == 's'))))
		return (-1);
	else if (str_ret)
		set_padding(&str_ret, &flags);
	if (!str_ret)
		return (0);
	return (print_buff(buff, buff_i) + p_ft_putstr_free(str_ret));
}
