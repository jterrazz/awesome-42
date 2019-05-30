/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jterrazz <jterrazz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/12 12:52:35 by jterrazz          #+#    #+#             */
/*   Updated: 2017/04/16 15:41:17 by jterrazz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int			ft_lsize(long n)
{
	int size;

	size = 1;
	while (n /= 10)
		size++;
	return (size);
}

static void			set_itoa(char *str, long n_long, int neg, int len)
{
	long	divider;
	int		i;

	i = 0;
	divider = 1;
	while (len--)
		divider *= 10;
	if (neg == 1)
	{
		str[i] = '-';
		i++;
	}
	while (divider /= 10)
	{
		str[i] = n_long / divider + '0';
		i++;
		n_long = n_long - (n_long / divider) * divider;
	}
}

char				*ft_itoa(int n)
{
	char			*str;
	long			n_long;
	int				neg;
	int				len;

	n_long = (long)n;
	neg = 0;
	if (n_long < 0)
	{
		neg = 1;
		n_long *= -1;
	}
	len = ft_lsize(n_long);
	str = ft_strnew(len + neg);
	if (str == NULL)
		return (NULL);
	if (n_long == 0)
	{
		str[0] = '0';
		return (str);
	}
	set_itoa(str, n_long, neg, len);
	return (str);
}
