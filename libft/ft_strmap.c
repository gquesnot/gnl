/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strmap.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: gquesnot <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/11/28 13:40:23 by gquesnot     #+#   ##    ##    #+#       */
/*   Updated: 2017/12/15 09:36:07 by gquesnot    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strmap(const char *s, char (*f)(char))
{
	char	*tmp;
	int		i;

	i = 0;
	tmp = NULL;
	if (s == NULL || *f == NULL)
		return (NULL);
	if ((tmp = ft_strnew(ft_strlen(s))) == NULL)
		return (NULL);
	while (s[i])
	{
		tmp[i] = f(s[i]);
		i += 1;
	}
	tmp[i] = '\0';
	return (tmp);
}
