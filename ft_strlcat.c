/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdeclerf <mdeclerf@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 16:12:24 by mdeclerf          #+#    #+#             */
/*   Updated: 2021/04/14 12:09:47 by mdeclerf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	dst_count;
	size_t	src_count;

	i = 0;
	dst_count = ft_strlen(dst);
	src_count = ft_strlen(src);
	if (dstsize < dst_count || dstsize == 0)
		return (dstsize + src_count);
	while (dst_count + i < dstsize - 1 && src[i] != '\0')
	{
		dst[dst_count + i] = src[i];
		i++;
	}
	dst[dst_count + i] = '\0';
	return (dst_count + src_count);
}
