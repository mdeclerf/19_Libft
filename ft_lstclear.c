/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdeclerf <mdeclerf@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 09:57:21 by mdeclerf          #+#    #+#             */
/*   Updated: 2021/04/19 16:51:15 by mdeclerf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;
	t_list	*backup;

	temp = *lst;
	if (del == NULL)
		return ;
	while (temp != NULL)
	{
		backup = temp->next;
		del(temp->content);
		free(temp);
		temp = backup;
	}
	*lst = NULL;
}
