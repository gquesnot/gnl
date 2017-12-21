/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strncat.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: gquesnot <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/11/28 13:40:07 by gquesnot     #+#   ##    ##    #+#       */
/*   Updated: 2017/12/15 10:07:26 by gquesnot    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strncat(char *dest, const char *src, size_t n)
{
	int		i;
	int		j;

	j = 0;
	i = 0;
	while (dest[i] != '\0')
		i += 1;
	while (n && src[j] != '\0')
	{
		dest[i + j] = src[j];
		j += 1;
		n -= 1;
	}
	if (dest)
		dest[i + j] = '\0';
	return (dest);
}
