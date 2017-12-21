/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strrchr.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: gquesnot <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/11/28 13:46:35 by gquesnot     #+#   ##    ##    #+#       */
/*   Updated: 2017/12/15 10:10:26 by gquesnot    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strrchr(const char *s, int c)
{
	char	temp;
	int		i;
	int		last;

	i = 0;
	last = 0;
	temp = (char)c;
	while (s[i] != '\0')
	{
		if (s[i] == temp)
			last = i + 1;
		i += 1;
	}
	if (c == 0)
		return (char *)(s + i);
	else if (last == 0)
		return (char *)(NULL);
	else
		return (char *)(s + last - 1);
}
