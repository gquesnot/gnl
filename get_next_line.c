/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   get_next_line2.c                                 .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: gquesnot <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/12/20 14:50:43 by gquesnot     #+#   ##    ##    #+#       */
/*   Updated: 2017/12/21 15:33:49 by gquesnot    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "get_next_line.h"
#include <fcntl.h>
#include <unistd.h>
#include <errno.h>
#include <stdio.h>

void			ft_print_list(t_list *list);

char			*ft_strjoin_new(char *dest, char *src, int pos)
{
	char *tmp;

	if (pos != 0)
			src[pos] = '\0';
	tmp = ft_strjoin(dest, src);
	free(dest);
	return (tmp);
	
}

int				ft_find_char(char *str, char c)
{
	int			i;

	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			return (i);
		i++;
	}
	return (0);
}





int				ft_read_line(t_list *list)
{
	char		*buff;
	int			i;
	int			nb_read;

	i = 0;
	if ((buff = ft_strnew(BUFF_SIZE + 1)) == 0)
		return (0);
	bzero(buff, BUFF_SIZE + 1);
	while ((nb_read = read(list->content_size, buff, BUFF_SIZE)) >= 0)
	{
		if (nb_read != BUFF_SIZE || nb_read <= 0 || ft_find_char(buff, '\n') != 0)
		{
			buff[nb_read + 1] = '\0';
			list->content = ft_strjoin_new((char*)list->content, buff , ft_find_char(buff, '\n'));
			return (nb_read);
		}
		else
		{
			buff[nb_read] = '\0';
			list->content = ft_strjoin_new((char*)list->content, buff, 0);
		}
		bzero(buff, BUFF_SIZE + 1);
	}
	return (0);
}

void			ft_print_list(t_list *list)
{
	t_list *tmp;

	tmp = list;
	while (tmp->next)
	{
		ft_putendl((char*)tmp->content);
		tmp = tmp->next;
	}
}

t_list			*ft_lstnew_fd( t_list *list, int fd)
{
	t_list		*tmp;

	tmp = list;
	if (tmp == NULL)
		tmp = ft_lstnew("", fd);
	if ((int)tmp->content_size != fd)
	{
		ft_lstadd(&tmp, ft_lstnew("", fd));
	}
	
	return (tmp);
}


int				get_next_line2(int const fd, char **line)
{
	static t_list	*list;
	int			index;

	if (!line || (list = malloc(sizeof(t_list))) == 0 || fd < 0)
		return (-1);
	list = ft_lstnew_fd(list, fd);
	index = ft_read_line(list);
	*line = ft_strdup(list->content);
		return (index);
}
