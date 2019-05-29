/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jterrazz <jterrazz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/07 21:32:22 by jterrazz          #+#    #+#             */
/*   Updated: 2019/05/13 15:35:47 by jterrazz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# define BUFF_SIZE 3
# include <unistd.h>
# include <stdlib.h>
# include "libft.h"

typedef struct	s_buff
{
	int		buff_size;
	char	buff[BUFF_SIZE];
}				t_buff;

typedef struct	s_list_fd
{
	int					fd;
	struct s_buff		*buff;
	struct s_list_fd	*next;
}				t_list_fd;

int				get_next_line(const int fd, char **line);

#endif
