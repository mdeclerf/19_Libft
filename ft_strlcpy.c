/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdeclerf <mdeclerf@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 15:59:19 by mdeclerf          #+#    #+#             */
/*   Updated: 2021/04/14 10:32:59 by mdeclerf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize )
{
	unsigned int	i;
	unsigned int	len;

	if (dst == 0 || src == 0)
		return (0);
	i = ft_strlen(src);
	if (dstsize != 0)
	{
		if (i >= dstsize)
			len = dstsize - 1;
		else
			len = i;
		ft_memcpy(dst, src, len);
		dst[len] = '\0';
	}
	return (i);
}
