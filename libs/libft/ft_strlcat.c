/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jterrazz <jterrazz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/14 16:55:39 by jterrazz          #+#    #+#             */
/*   Updated: 2017/04/16 15:16:22 by jterrazz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t length_dst;
	size_t length_src;
	size_t i;
	size_t total_size;

	i = 0;
	length_dst = 0;
	length_src = 0;
	while (src[length_src])
		length_src++;
	while (dst[length_dst])
		length_dst++;
	total_size = length_src + length_dst;
	if (length_dst >= size)
		return (size + length_src);
	while (length_dst + i < total_size && length_dst + i < size - 1)
	{
		dst[length_dst + i] = src[i];
		i++;
	}
	dst[length_dst + i] = 0;
	return (total_size);
}
