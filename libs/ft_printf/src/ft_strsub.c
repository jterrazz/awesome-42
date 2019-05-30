/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jterrazz <jterrazz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/11 20:38:18 by jterrazz          #+#    #+#             */
/*   Updated: 2019/05/02 23:51:23 by jterrazz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*p_ft_strsub_free(char *s, unsigned int start, size_t len)
{
	char			*new_s;
	unsigned int	i;

	i = 0;
	new_s = p_ft_strnew(len);
	if (new_s == NULL)
		return (NULL);
	while (i < len)
	{
		new_s[i] = s[start];
		i++;
		start++;
	}
	free(s);
	return (new_s);
}
