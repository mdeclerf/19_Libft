/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdeclerf <mdeclerf@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 10:50:26 by mdeclerf          #+#    #+#             */
/*   Updated: 2021/04/16 12:31:27 by mdeclerf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*mylist;

	mylist = malloc(sizeof(t_list *));
	if (mylist == NULL)
		return (NULL);
	mylist->content = content;
	mylist->next = NULL;
	return (mylist);
}
