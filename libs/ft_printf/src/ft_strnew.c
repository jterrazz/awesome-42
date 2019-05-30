/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jterrazz <jterrazz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/11 19:51:25 by jterrazz          #+#    #+#             */
/*   Updated: 2019/05/02 23:51:20 by jterrazz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "stdlib.h"

char	*p_ft_strnew(size_t size)
{
	char			*str;
	unsigned int	i;

	i = 0;
	str = (char *)p_ft_memalloc(sizeof(char) * size + 1);
	if (str == NULL)
		return (NULL);
	return (str);
}
