/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jterrazz <jterrazz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/11 20:38:18 by jterrazz          #+#    #+#             */
/*   Updated: 2017/04/16 15:35:32 by jterrazz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char			*new_s;
	unsigned int	i;

	i = 0;
	new_s = ft_strnew(len);
	if (new_s == NULL)
		return (NULL);
	while (i < len)
	{
		new_s[i] = s[start];
		i++;
		start++;
	}
	return (new_s);
}
