/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_lstadd.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: gquesnot <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/11/28 13:48:51 by gquesnot     #+#   ##    ##    #+#       */
/*   Updated: 2017/12/15 13:58:49 by gquesnot    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

void			ft_lstadd(t_list **alst, t_list *new)
{
	t_list		*lst;

	lst = *alst;
	if (!(*alst))
		*alst = new;
	else
		new->next = lst;
	*alst = new;
}
