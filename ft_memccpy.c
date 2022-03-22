/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdeclerf <mdeclerf@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 15:56:15 by mdeclerf          #+#    #+#             */
/*   Updated: 2021/04/15 18:06:23 by mdeclerf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t			count;
	unsigned char	*mydst;
	unsigned char	*mysrc;
	unsigned char	mychar;
	void			*retour;

	count = 0;
	mydst = (unsigned char *)dst;
	mysrc = (unsigned char *)src;
	mychar = (unsigned char)c;
	while (count < n)
	{
		mydst[count] = mysrc[count];
		if (mysrc[count] == mychar)
		{
			retour = (void *)mydst + count + 1 ;
			return (retour);
		}
		count++;
	}
	return (0);
}
