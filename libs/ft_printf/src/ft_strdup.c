/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jterrazz <jterrazz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/10 19:39:01 by jterrazz          #+#    #+#             */
/*   Updated: 2019/05/02 23:51:00 by jterrazz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_printf.h"

char	*p_ft_strdup(const char *s1)
{
	char	*str;
	int		size;
	int		i;

	i = 0;
	size = 0;
	while (s1[size])
		size++;
	if ((str = (char *)malloc(sizeof(*str) * (size + 1))) == NULL)
		return (NULL);
	while (s1[i])
	{
		str[i] = s1[i];
		i++;
	}
	str[i] = 0;
	return (str);
}
