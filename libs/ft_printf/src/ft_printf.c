/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jterrazz <jterrazz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/10 16:54:12 by jterrazz          #+#    #+#             */
/*   Updated: 2017/06/04 10:51:40 by jterrazz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int			print_buff(char buff[4096], int *i)
{
	int	ret;

	ret = *i;
	*i = 0;
	write(1, buff, ret);
	return (ret);
}

static int	ft_run(char *str, va_list *va, int count)
{
	int		ret;
	char	buff[4096];
	int		i;

	i = 0;
	while (*str)
	{
		if (i == 4095)
			count += print_buff(buff, &i);
		if (*str == '%')
		{
			if (*(++str))
				ret = dispatch(va, &str, buff, &i);
			else
				return (count + print_buff(buff, &i));
			if (ret == -1)
				return (-1);
			count += ret;
		}
		else
			buff[i++] = *str;
		if (*str)
			str++;
	}
	return (count + print_buff(buff, &i));
}

int			ft_printf(const char *restrict format, ...)
{
	int		ret;
	va_list	va;
	int		count;

	ret = 0;
	count = 0;
	if (*format)
	{
		va_start(va, format);
		ret = ft_run((char *)format, &va, count);
		va_end(va);
	}
	return (ret);
}
