/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_lstnew.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: gquesnot <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/11/28 13:49:00 by gquesnot     #+#   ##    ##    #+#       */
/*   Updated: 2017/12/15 11:06:14 by gquesnot    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

t_list			*ft_lstnew(const void *content, size_t content_size)
{
	t_list		*new;

	if (!(new = malloc(1 * sizeof(t_list))))
		return (NULL);
	if (content == NULL || content_size == 0)
	{
		new->content = NULL;
		new->content_size = 0;
	}
	else
	{
		new->content = (void*)ft_strdup((char*)content);
		new->content_size = content_size;
	}
	new->next = NULL;
	return (new);
}
