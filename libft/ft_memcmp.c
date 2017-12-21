/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_memcmp.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: gquesnot <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/11/28 13:47:37 by gquesnot     #+#   ##    ##    #+#       */
/*   Updated: 2017/12/15 10:49:43 by gquesnot    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

int						ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char		*ss1;
	unsigned char		*ss2;
	size_t				i;

	ss1 = (unsigned char *)s1;
	ss2 = (unsigned char *)s2;
	i = 0;
	while (i < n && ss1[i] == ss2[i] && ss1 && ss2)
		i++;
	if (i == n)
		return (0);
	return (ss1[i] - ss2[i]);
}
