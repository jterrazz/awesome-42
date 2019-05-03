/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jterrazz <jterrazz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/02 19:13:39 by jterrazz          #+#    #+#             */
/*   Updated: 2019/05/03 22:33:37 by jterrazz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"

// TODO Check author file
// TODO Check norminette even in libs
// TODO Check all files in libs (subject etc)
// TODO Removes .a files from git

int main(int argc, char const *argv[])
{
	void *test = ft_memalloc(3);
	char* text = ft_strnew(10);
	ft_strncpy(text, "Suka blyat", 10);
	int i = 42;
	unsigned int u = 42;
	ft_printf("Yoooo %s %p %d %i %o %u %x %f\n", text, text, i, i, u, i, i);
	ft_putstr("Yoooo\n");

	return 0;
}
