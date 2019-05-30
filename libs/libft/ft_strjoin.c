/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jterrazz <jterrazz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/12 12:08:25 by jterrazz          #+#    #+#             */
/*   Updated: 2017/04/16 15:38:08 by jterrazz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char			*new_s;
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	new_s = ft_strnew(ft_strlen(s1) + ft_strlen(s2));
	if (new_s == NULL)
		return (NULL);
	while (s1[i])
	{
		new_s[j] = s1[i];
		i++;
		j++;
	}
	i = 0;
	while (s2[i])
	{
		new_s[j] = s2[i];
		i++;
		j++;
	}
	return (new_s);
}
