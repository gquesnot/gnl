/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_atoi.c                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: gquesnot <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/11/28 13:32:56 by gquesnot     #+#   ##    ##    #+#       */
/*   Updated: 2017/12/15 09:45:43 by gquesnot    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

long		ft_atoi_2(long *nbr, int neg)
{
	if (*nbr > 2147483646 && neg % 2 == 0)
		return (-1);
	if (*nbr > 2147483647 && neg % 2 == 1)
		return (0);
	else
		return (1);
}

int			ft_atoi_3(long *nbr, int neg)
{
	if (neg == 1)
		return (-(*nbr));
	else
		return (*nbr);
}

int			ft_atoi(const char *str)
{
	int		i;
	long	nbr;
	int		negative;

	nbr = 0;
	negative = 0;
	i = 0;
	while ((str[i] == '\n') || (str[i] == '\t') || (str[i] == '\v') ||
			(str[i] == ' ') || (str[i] == '\f') || (str[i] == '\r'))
		i = i + 1;
	if (str[i] == '-')
		negative = 1;
	if (str[i] == '+' || str[i] == '-')
		i = i + 1;
	while (str[i] && (str[i] >= '0') && (str[i] <= '9'))
	{
		if (ft_atoi_2(&nbr, negative) == 0 || ft_atoi_2(&nbr, negative) == -1)
			return (ft_atoi_2(&nbr, negative));
		nbr = nbr * 10;
		nbr = nbr + (int)str[i] - '0';
		i = i + 1;
	}
	return (ft_atoi_3(&nbr, negative));
}
