/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdeclerf <mdeclerf@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 15:58:43 by mdeclerf          #+#    #+#             */
/*   Updated: 2021/04/16 09:48:32 by mdeclerf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	ch;
	char	*string;

	ch = (char)c;
	string = (char *)s;
	while (*string != ch)
	{
		if (*string == '\0')
			return (0);
		string++;
	}
	return (string);
}
