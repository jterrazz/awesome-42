/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jterrazz <jterrazz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/10 19:42:30 by jterrazz          #+#    #+#             */
/*   Updated: 2017/04/16 15:13:03 by jterrazz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *s1, const char *s2)
{
	int length1;
	int length2;

	length1 = 0;
	length2 = 0;
	while (s1[length2] != '\0')
		length2++;
	while (s2[length1] != '\0')
	{
		s1[length2 + length1] = s2[length1];
		length1++;
	}
	s1[length1 + length2] = '\0';
	return (s1);
}
