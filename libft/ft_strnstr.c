/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strnstr.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: gquesnot <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/11/28 13:39:46 by gquesnot     #+#   ##    ##    #+#       */
/*   Updated: 2017/11/28 13:39:47 by gquesnot    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strnstr(const char *s1, const char *s2, size_t len)
{
	size_t		i;
	size_t		j;

	i = 0;
	if (s2[0] == '\0')
		return (char *)(s1);
	while (s1[i] && i < len)
	{
		j = 0;
		if (s1[i + j] == s2[j])
		{
			while (s2[j] == s1[i + j] && i + j < len)
			{
				j = j + 1;
				if (s2[j] == '\0')
					return (char *)(s1 + i);
			}
		}
		i = i + 1;
	}
	return (NULL);
}
