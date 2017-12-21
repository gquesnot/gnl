/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strsub.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: gquesnot <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/11/28 13:44:38 by gquesnot     #+#   ##    ##    #+#       */
/*   Updated: 2017/12/15 09:10:00 by gquesnot    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char				*ft_strsub(const char *s1, unsigned int start, size_t len)
{
	unsigned int	i;
	char			*tmp;

	i = 0;
	if (!s1 || (int)len <= -1)
		return (NULL);
	if ((tmp = ft_strnew(len)) == NULL)
		return (NULL);
	while (i < len)
	{
		tmp[i] = s1[start + i];
		i += 1;
	}
	return (tmp);
}
