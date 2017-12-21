/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_memcpy.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: gquesnot <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/11/28 13:47:09 by gquesnot     #+#   ##    ##    #+#       */
/*   Updated: 2017/12/15 10:33:34 by gquesnot    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

void			*ft_memcpy(void *dest, const void *src, size_t n)
{
	char		*s1;
	char		*s2;
	size_t		i;

	s1 = (char *)dest;
	s2 = (char *)src;
	i = 0;
	while (n > i)
	{
		s1[i] = s2[i];
		i++;
	}
	return (dest);
}
