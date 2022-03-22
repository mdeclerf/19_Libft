/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdeclerf <mdeclerf@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 15:57:23 by mdeclerf          #+#    #+#             */
/*   Updated: 2021/04/20 17:18:59 by mdeclerf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	int				i;
	unsigned char	*mydst;
	unsigned char	*mysrc;
	int				mylen;

	i = 0;
	mydst = (unsigned char *)dst;
	mysrc = (unsigned char *)src;
	mylen = (int)n;
	if (dst == NULL && src == NULL)
		return (NULL);
	while (i < mylen)
	{
		mydst[i] = mysrc[i];
		i++;
	}
	return ((void *)mydst);
}
