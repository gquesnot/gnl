/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_memchr.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: gquesnot <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/11/28 13:48:37 by gquesnot     #+#   ##    ##    #+#       */
/*   Updated: 2017/12/15 10:25:58 by gquesnot    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

void			*ft_memchr(const void *s, int c, size_t n)
{
	char		*s1;
	char		c1;
	size_t		i;

	s1 = (char *)s;
	c1 = (char)c;
	i = 0;
	while (i < n)
	{
		if (s1[i] == c1)
			return ((void *)(s + i));
		i = i + 1;
	}
	return (NULL);
}
