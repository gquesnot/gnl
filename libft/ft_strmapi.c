/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strmapi.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: gquesnot <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/11/28 13:41:27 by gquesnot     #+#   ##    ##    #+#       */
/*   Updated: 2017/12/15 11:20:26 by gquesnot    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char				*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	char			*tmp;
	unsigned int	i;

	if (s == NULL)
		return (NULL);
	i = 0;
	if ((tmp = malloc((ft_strlen(s) + 1) * sizeof(char))) == NULL)
		return (NULL);
	while (s[i])
	{
		tmp[i] = f(i, s[i]);
		i += 1;
	}
	tmp[i] = '\0';
	return (tmp);
}
