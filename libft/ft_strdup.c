/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strdup.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: gquesnot <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/11/28 13:43:21 by gquesnot     #+#   ##    ##    #+#       */
/*   Updated: 2017/12/15 10:06:38 by gquesnot    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strdup(const char *s)
{
	char	*s1;
	int		i;
	int		len;

	i = 0;
	len = ft_strlen(s);
	if ((s1 = (char *)malloc((len + 1) * sizeof(char))) == NULL)
		return (NULL);
	while (s[i])
	{
		s1[i] = s[i];
		i = i + 1;
	}
	s1[i] = '\0';
	return (s1);
}
