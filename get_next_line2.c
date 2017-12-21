/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   get_next_line2.c                                 .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: gquesnot <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/12/20 14:50:43 by gquesnot     #+#   ##    ##    #+#       */
/*   Updated: 2017/12/21 11:07:46 by gquesnot    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "get_next_line.h"
#include <fcntl.h>
#include <unistd.h>
#include <errno.h>

void			ft_print_list(t_list *list);

char			*ft_strjoin_new(char *dest, char *src)
{
	char *tmp;

	tmp = ft_strjoin(dest, src);
	free(dest);
	return (tmp);
	
}







int				ft_read_line(t_list *list)
{
	char		*buff;
	int			i;
	int			nb_read;

	i = 0;
	ft_putnbr(list->content_size);
	if ((buff = ft_strnew(BUFF_SIZE + 1)) == 0)
		return (0);
	while ((nb_read = read(list->content_size, buff, BUFF_SIZE)) >= 0)
	{
		ft_putchar('c');
		if (nb_read != BUFF_SIZE || nb_read <= 0)
		{
			ft_putchar('E');
			buff[nb_read] = '\0';
			list->content = ft_strjoin_new((char*)list->content, buff);
			return (1);
		}
		else
		{
			buff[nb_read] = '\0';
			list->content = ft_strjoin_new((char*)list->content, buff);
		}
	}
	return (i);
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

t_list			*ft_lstnew_fd(t_list **list, int fd)
{
	t_list *tmp;

	tmp = *list;
	if (tmp == NULL)
		tmp = ft_lstnew("", fd);
	if ((int)tmp->content_size != fd)
	{
		ft_putchar('c');
		ft_lstadd(&tmp, ft_lstnew("", fd));
	}
	
	return (tmp);
}


int				get_next_line2(int const fd, char **line)
{
	t_list		*list;
	int			index;

	if (!line || (list = malloc(sizeof(t_list))) == 0 || fd < 0)
		return (-1);
	list = ft_lstnew_fd(&list, fd);
	ft_putchar('a');
	index = ft_read_line(list);
	ft_putchar('b');
	ft_putendl((char*)list->content);
		return (1);
}
