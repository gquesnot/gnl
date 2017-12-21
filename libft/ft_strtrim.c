/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strtrim.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: gquesnot <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/11/28 13:35:18 by gquesnot     #+#   ##    ##    #+#       */
/*   Updated: 2017/12/15 09:10:16 by gquesnot    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strtrim(const char *s)
{
	int		i;
	int		start;
	int		size;
	char	*tmp;

	i = 0;
	start = 0;
	if (!s)
		return (NULL);
	size = ft_strlen(s);
	while (s[i] != '\0' && (s[i] == ' ' || s[i] == '\t' || s[i] == '\n' || \
				s[i] == ','))
		i += 1;
	if (i != start)
		start = i;
	size = size - 1;
	tmp = ft_strnew(size - i);
	i = 0;
	while (start + i < size && (s[size - i] == ' ' || s[size - i] == '\t' || \
				s[size - i] == '\n' \
				|| s[size - i] == ','))
		i += 1;
	tmp = ft_strsub(s, start, size - start - i + 1);
	return (tmp);
}
