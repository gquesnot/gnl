/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strcat.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: gquesnot <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/11/28 13:39:57 by gquesnot     #+#   ##    ##    #+#       */
/*   Updated: 2017/12/15 10:07:37 by gquesnot    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strcat(char *dest, const char *src)
{
	int		i;
	int		j;

	j = 0;
	i = 0;
	while (dest && dest[i] != '\0')
		i += 1;
	while (src[j] != '\0')
	{
		dest[i + j] = src[j];
		j += 1;
	}
	if (dest)
		dest[i + j] = '\0';
	return (dest);
}
