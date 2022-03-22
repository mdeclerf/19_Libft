/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdeclerf <mdeclerf@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 16:01:12 by mdeclerf          #+#    #+#             */
/*   Updated: 2021/04/14 13:40:15 by mdeclerf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	ch;
	int		len;
	char	*string;

	ch = (char)c;
	len = ft_strlen(s);
	string = (char *)s + len;
	if (ch == '\0')
		return (string);
	while (string >= s)
	{
		if (*string == ch)
			return (string);
		string--;
	}
	return (0);
}
