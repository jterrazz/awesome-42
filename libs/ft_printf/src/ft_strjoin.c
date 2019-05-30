/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jterrazz <jterrazz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/12 12:08:25 by jterrazz          #+#    #+#             */
/*   Updated: 2019/05/02 23:51:12 by jterrazz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void		free_multiple(char *s1, char *s2, int x, int y)
{
	if (x)
		free(s1);
	if (y)
		free(s2);
}

char			*p_ft_strjoin_free(char *s1, char *s2, int x, int y)
{
	char			*new_s;
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	if (!s1 || !s2)
		return (NULL);
	new_s = p_ft_strnew(p_ft_strlen(s1) + p_ft_strlen(s2));
	if (new_s == NULL)
		return (NULL);
	while (s1[i])
		new_s[j++] = s1[i++];
	i = 0;
	while (s2[i])
		new_s[j++] = s2[i++];
	free_multiple(s1, s2, x, y);
	return (new_s);
}

char			*p_ft_strjoin_inside_free(char *s1, char *s2, unsigned int x)
{
	char			*new_s;
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	if (!s1 || !s2)
		return (NULL);
	new_s = p_ft_strnew(p_ft_strlen(s1) + p_ft_strlen(s2));
	if (new_s == NULL)
		return (NULL);
	while (s2[i] && i < x)
		new_s[j++] = s2[i++];
	i = 0;
	while (s1[i])
		new_s[j++] = s1[i++];
	i = x;
	while (s2[i])
		new_s[j++] = s2[i++];
	free_multiple(s1, s2, 1, 1);
	return (new_s);
}
