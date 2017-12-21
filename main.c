/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   main.c                                           .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: gquesnot <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/12/20 15:39:25 by gquesnot     #+#   ##    ##    #+#       */
/*   Updated: 2017/12/21 15:31:15 by gquesnot    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "get_next_line.h"
#include <fcntl.h>
#include <stdio.h>

int main(int argc, const char *argv[])
{
	int fd;
	int fd2;
	char *line;

	argc = 2;
	fd = open(argv[1], O_RDONLY);
	fd2 = open(argv[2], O_RDONLY);
	while (get_next_line2(fd, &line) > 0)
		printf("fd1: %s\n", line);
	close (fd);
	return 0;
}
