/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strjoin.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: gquesnot <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/11/28 13:41:42 by gquesnot     #+#   ##    ##    #+#       */
/*   Updated: 2017/12/15 09:18:25 by gquesnot    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strjoin(const char *s1, const char *s2)
{
	int		i;
	int		j;
	char	*tmp;

	i = 0;
	j = 0;
	if (!s1 || !s2)
		return (NULL);
	if ((tmp = ft_strnew(ft_strlen(s1) + ft_strlen(s2))) == NULL)
		return (NULL);
	while (s1[j] != '\0')
	{
		tmp[i] = s1[j];
		i += 1;
		j += 1;
	}
	j = 0;
	while (s2[j] != '\0')
	{
		tmp[i] = s2[j];
		i += 1;
		j += 1;
	}
	return (tmp);
}
