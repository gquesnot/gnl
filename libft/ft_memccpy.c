/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_memccpy.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: gquesnot <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/11/28 13:55:47 by gquesnot     #+#   ##    ##    #+#       */
/*   Updated: 2017/11/28 13:55:51 by gquesnot    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	char	*s1;
	char	*s2;
	char	c1;
	int		i;

	i = 0;
	s1 = (char *)dest;
	s2 = (char *)src;
	c1 = (char)c;
	if (!n || s1 == s2)
		return (NULL);
	while (n > 0)
	{
		*s1 = *s2;
		if (*s1 == c1)
			return (dest + i + 1);
		s1 = s1 + 1;
		s2 = s2 + 1;
		i = i + 1;
		n = n - 1;
	}
	return (NULL);
}
