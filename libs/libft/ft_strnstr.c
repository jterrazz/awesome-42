/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jterrazz <jterrazz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/10 20:19:52 by jterrazz          #+#    #+#             */
/*   Updated: 2017/04/16 15:21:23 by jterrazz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t i;
	size_t str_len;

	i = 0;
	if (*big == 0)
		return (NULL);
	if (*little == 0)
		return ((char *)big);
	str_len = ft_strlen(little);
	while (big[i] && (i + str_len) <= len)
	{
		if (ft_strncmp(&big[i], little, str_len) == 0)
			return ((char *)big + i);
		i++;
	}
	return (NULL);
}
