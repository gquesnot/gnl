/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strnew.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: gquesnot <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/11/28 13:41:08 by gquesnot     #+#   ##    ##    #+#       */
/*   Updated: 2017/12/15 09:07:25 by gquesnot    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char			*ft_strnew(size_t size)
{
	char		*str;

	if ((str = malloc((size + 1) * sizeof(char))) == NULL)
		return (NULL);
	ft_memset(str, 0, size + 1);
	return (str);
}
