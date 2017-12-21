/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_memmove.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: gquesnot <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/11/28 13:47:02 by gquesnot     #+#   ##    ##    #+#       */
/*   Updated: 2017/12/15 10:40:09 by gquesnot    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

void			*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*s1;
	unsigned char		*s2;

	s2 = (unsigned char *)src;
	s1 = (unsigned char *)dest;
	if (s1 > s2)
	{
		while (n--)
		{
			s1[n] = s2[n];
		}
	}
	else
		ft_memcpy(s1, s2, n);
	return (s1);
}
