/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_white_whitespaces.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jterrazz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/20 18:51:37 by jterrazz          #+#    #+#             */
/*   Updated: 2017/04/16 15:41:03 by jterrazz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int		tab_size(char const *s, char c)
{
	int count;
	int i;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] != c && (i == 0 || s[i - 1] == c))
			count++;
		i++;
	}
	return (count);
}

static int		word_size(const char *str, char c)
{
	int i;

	i = 0;
	while (str[i] && str[i] != c)
		i++;
	return (i);
}

char			**ft_strsplit(char const *s, char c)
{
	char	**tab;
	int		i;
	int		nb_words;

	i = 0;
	nb_words = tab_size(s, c);
	if ((tab = (char **)malloc(sizeof(char *) * (nb_words + 1))) == NULL)
		return (NULL);
	while (nb_words--)
	{
		while (*s == c && *s)
			s++;
		tab[i] = ft_strsub(s, 0, word_size(s, c));
		if (tab[i] == NULL)
			return (NULL);
		s = s + word_size(s, c);
		i++;
	}
	tab[i] = NULL;
	return (tab);
}
