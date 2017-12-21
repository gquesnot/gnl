/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   main.c                                           .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: gquesnot <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/12/20 15:39:25 by gquesnot     #+#   ##    ##    #+#       */
/*   Updated: 2017/12/20 15:48:33 by gquesnot    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"
#include <fcntl.h>

int		get_next_line2(int fd, char **line);

int main(int argc, const char *argv[])
{
	int fd;
	char *line;

	fd = open(argv[1], O_RDONLY);
	get_next_line2(fd, &line);
	return 0;
}
