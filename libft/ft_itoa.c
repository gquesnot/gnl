/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_itoa.c                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: gquesnot <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/11/28 13:57:54 by gquesnot     #+#   ##    ##    #+#       */
/*   Updated: 2017/12/15 09:11:00 by gquesnot    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

static void		ft_is_neg(long *n, int *neg)
{
	if (*n < 0)
	{
		*neg = 1;
		*n = -(*n);
	}
}

char			*ft_itoa(int n)
{
	char		*res;
	long		nb;
	int			i;
	int			neg;

	neg = 0;
	i = 2;
	nb = (long)n;
	ft_is_neg(&nb, &neg);
	i = i + neg;
	while (n /= 10)
		i += 1;
	if ((res = ft_strnew(i - 1)) == NULL)
		return (NULL);
	i -= 1;
	res[i] = '\0';
	while (i > 0)
	{
		i -= 1;
		res[i] = nb % 10 + '0';
		nb /= 10;
	}
	if (neg)
		res[0] = '-';
	return (res);
}
