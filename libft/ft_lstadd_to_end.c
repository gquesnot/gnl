/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_lstadd.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: gquesnot <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/11/28 13:48:51 by gquesnot     #+#   ##    ##    #+#       */
/*   Updated: 2017/12/20 16:32:13 by gquesnot    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

void			ft_lstadd_to_end(t_list **alst, t_list *new)
{
	t_list		*lst;

	lst = *alst;
	if (!(*alst))
		*alst = new;
	else
	{
		while (lst->next != NULL)
			lst = lst->next;
		lst->next = new;
	}
}
