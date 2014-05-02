/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrault <abrault@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/04/27 14:48:32 by abrault           #+#    #+#             */
/*   Updated: 2014/05/02 17:53:32 by abrault          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# define BUFF_SIZE 4096

# include <fcntl.h>
# include <unistd.h>
# include <string.h>
# include <stdlib.h>
# include <sys/uio.h>
# include <sys/wait.h>
# include <sys/types.h>
# include <libft.h>

typedef struct s_read	t_read;

struct					s_read
{
	int					size;
	int					index;
	int					fd;
	char				*read;
	t_read				*next;
};

int						get_next_line(int const fd, char **line);

#endif
