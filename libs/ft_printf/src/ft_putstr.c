/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jterrazz <jterrazz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/12 13:43:27 by jterrazz          #+#    #+#             */
/*   Updated: 2019/05/02 23:50:57 by jterrazz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <unistd.h>

int		p_ft_putstr_free(char *s)
{
	int		i;

	i = 0;
	while (s[i])
		i++;
	write(1, s, i);
	free(s);
	return (i);
}

int		p_ft_putstr(char *s)
{
	int		i;

	i = 0;
	while (s[i])
		i++;
	write(1, s, i);
	return (i);
}
