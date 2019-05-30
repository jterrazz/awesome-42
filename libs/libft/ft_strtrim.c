/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jterrazz <jterrazz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/12 12:20:56 by jterrazz          #+#    #+#             */
/*   Updated: 2017/04/16 15:39:33 by jterrazz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		is_space(char c)
{
	if (c == ' ' || c == '\n' || c == '\t')
		return (1);
	return (0);
}

char			*ft_strtrim(char const *s)
{
	int		start;
	int		end;
	char	*str;
	int		i;

	start = 0;
	i = 0;
	while (s[start] && is_space(s[start]))
		start++;
	end = ft_strlen(s) - 1;
	while (s[end] && is_space(s[end]))
		end--;
	if (end - start + 1 <= 0)
		str = ft_strnew(0);
	else
		str = ft_strnew(end - start + 1);
	if (str == NULL)
		return (NULL);
	while (start <= end)
	{
		str[i] = s[start];
		i++;
		start++;
	}
	return (str);
}
