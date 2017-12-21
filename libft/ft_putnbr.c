/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_putnbr.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: gquesnot <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/11/28 13:45:49 by gquesnot     #+#   ##    ##    #+#       */
/*   Updated: 2017/11/28 14:18:40 by gquesnot    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

void		ft_putnbr2(int nbr)
{
	nbr = -nbr - 2000000000;
	ft_putstr("-2");
	ft_putnbr(nbr);
}

void		ft_putnbr(int nbr)
{
	if (nbr == -2147483648)
	{
		ft_putnbr2(nbr);
		return ;
	}
	if (nbr < 0)
	{
		nbr = -nbr;
		ft_putchar('-');
	}
	if (nbr >= 10)
	{
		ft_putnbr(nbr / 10);
		ft_putnbr(nbr % 10);
	}
	else
		ft_putchar('0' + nbr);
}
