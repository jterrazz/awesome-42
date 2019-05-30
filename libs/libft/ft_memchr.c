/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jterrazz <jterrazz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/10 19:20:19 by jterrazz          #+#    #+#             */
/*   Updated: 2017/04/16 15:06:47 by jterrazz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	unsigned char	c_char;
	size_t			i;

	i = 0;
	str = (unsigned char *)s;
	c_char = (unsigned char)c;
	while (i < n)
	{
		if (str[i] == c_char)
			return (&str[i]);
		i++;
	}
	return (NULL);
}
