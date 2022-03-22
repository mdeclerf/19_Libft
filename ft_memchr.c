/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdeclerf <mdeclerf@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 15:56:45 by mdeclerf          #+#    #+#             */
/*   Updated: 2021/04/15 18:06:29 by mdeclerf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			count;
	unsigned char	*mystr;
	unsigned char	mychar;
	void			*retour;

	count = 0;
	mystr = (unsigned char *)s;
	mychar = (unsigned char)c;
	while (count < n)
	{
		if (mystr[count] == mychar)
		{
			retour = (void *)mystr + count;
			return (retour);
		}
		count++;
	}
	return (0);
}
