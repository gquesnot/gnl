/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strlcat.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: gquesnot <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/11/28 13:40:13 by gquesnot     #+#   ##    ##    #+#       */
/*   Updated: 2017/12/15 10:08:50 by gquesnot    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

size_t			ft_strlcat(char *dest, const char *src, size_t n)
{
	size_t		i;
	size_t		j;

	j = 0;
	i = 0;
	while (dest[i] != '\0')
		i += 1;
	if (!src || i >= n)
		return (ft_strlen(src) + n);
	while ((i + j + 1) < n && src[j] != '\0')
	{
		dest[i + j] = src[j];
		j += 1;
	}
	if (dest)
		dest[i + j] = '\0';
	return (i + ft_strlen(src));
}
