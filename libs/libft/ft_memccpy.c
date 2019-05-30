/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jterrazz <jterrazz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/10 17:18:07 by jterrazz          #+#    #+#             */
/*   Updated: 2017/04/16 15:05:55 by jterrazz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*dst_str;
	unsigned char	*src_str;
	unsigned char	c_char;
	size_t			i;

	i = 0;
	c_char = (unsigned char)c;
	dst_str = (unsigned char *)dst;
	src_str = (unsigned char *)src;
	while (i < n)
	{
		dst_str[i] = src_str[i];
		if (src_str[i] == c_char)
			return (&dst_str[i + 1]);
		i++;
	}
	return (NULL);
}
