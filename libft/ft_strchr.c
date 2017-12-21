/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strchr.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: gquesnot <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/11/28 13:39:04 by gquesnot     #+#   ##    ##    #+#       */
/*   Updated: 2017/12/15 10:14:21 by gquesnot    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strchr(const char *s, int c)
{
	char	temp;
	int		i;

	i = 0;
	temp = (char)c;
	while (s[i] != '\0')
	{
		if (s[i] == temp)
			return (char *)(s + i);
		i = i + 1;
	}
	if (s[i] == temp)
		return (char *)(s + i);
	return (NULL);
}
