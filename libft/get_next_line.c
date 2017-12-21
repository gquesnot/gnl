/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   get_next_line.c                                  .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: gquesnot <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/12/20 13:27:16 by gquesnot     #+#   ##    ##    #+#       */
/*   Updated: 2017/12/20 14:50:38 by gquesnot    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"
#define BUFF_SIZE 32

void			ft_realoc(char **line, char *buff, size_t size)
{
	char		*tmp;

	tmp = ft_strnew(size);
	ft_strcpy(tmp, *line);
	*line = ft_strnew(size + BUFF_SIZE);
	ft_strcpy(*line, tmp);
	ft_strcat(*line, buff);
}

int				ft_read_size_c(int const fd, char **buff, char to_find,\
		int *error)
{
	int			i;
	char		tmp;

	i = 0;
	while ((*error = read(fd, &tmp, 1)))
	{
		if (tmp == to_find || i == BUFF_SIZE)
		{
			if (i == BUFF_SIZE)
				(*buff)[i] = tmp;
			return (i);
		}
		(*buff)[i] = tmp;
		i++;
	}
	return (i);
}

void			ft_get_next_line(char **line, char *buff, int i)
{
	if (i >= BUFF_SIZE)
		ft_realoc(line, buff, i + BUFF_SIZE);
	else
		ft_strcpy(*line, buff);
}

int				get_next_line(int const fd, char **line)
{
	char		*buff;
	int			i;
	int			error;

	error = 1;
	i = 0;
	if (!line)
		return (-1);
	buff = ft_strnew(BUFF_SIZE);
	*line = ft_strnew(BUFF_SIZE);
	if (!buff)
		return (-1);
	ft_bzero(*line, BUFF_SIZE);
	while (error > 0)
	{
		ft_bzero(buff, BUFF_SIZE);
		i = ft_read_size_c(fd, &buff, '\n', &error) + i;
		ft_get_next_line(line, buff, i);
		if (i % BUFF_SIZE != 0 && error > 0)
			return (1);
	}
	if (error == 0)
		return (0);
	return (-1);
}
