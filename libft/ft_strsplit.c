/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strsplit.c                                    .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: gquesnot <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/11/28 13:33:37 by gquesnot     #+#   ##    ##    #+#       */
/*   Updated: 2017/12/15 13:55:53 by gquesnot    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

static int			ft_strchr_count(const char *s, char c)
{
	int				i;
	int				res;

	i = 0;
	res = 0;
	if (!s)
		return (1);
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			while (s[i] == c)
				i += 1;
		}
		if (s[i] != c)
			res++;
		while (s[i] != c && s[i] != '\0')
			i += 1;
	}
	return (res);
}

static char			**ft_add_str_table(char **table, const char *str, int n,\
		int size)
{
	int				i;

	i = 0;
	while (table[i] != NULL)
		i += 1;
	table[i] = ft_strnew(size + 1);
	table[i] = ft_strsub(str, n, size);
	table[i + 1] = NULL;
	return (table);
}

char				**ft_strsplit(const char *s, char c)
{
	int				i;
	int				start;
	char			**res;

	if (s == NULL)
		return (NULL);
	start = 0;
	i = 0;
	if ((res = malloc(((ft_strchr_count(s, c)) + 1) * sizeof(char *))) == NULL)
		return (res = NULL);
	res[0] = NULL;
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			while (s[i] == c && s[i] != '\0')
				i += 1;
			start = i;
		}
		while (s[i] != c && s[i] != '\0')
			i += 1;
		if (i > start)
			res = ft_add_str_table(res, s, start, i - start);
	}
	return (res);
}
