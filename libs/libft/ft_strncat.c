/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jterrazz <jterrazz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/14 16:47:50 by jterrazz          #+#    #+#             */
/*   Updated: 2017/04/12 14:56:51 by jterrazz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	size_t length1;
	size_t length2;

	length1 = 0;
	length2 = 0;
	while (s1[length2] != '\0')
		length2++;
	while (s2[length1] != '\0' && length1 < n)
	{
		s1[length2 + length1] = s2[length1];
		length1++;
	}
	s1[length1 + length2] = '\0';
	return (s1);
}
