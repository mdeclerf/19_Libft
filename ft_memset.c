/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdeclerf <mdeclerf@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 15:58:19 by mdeclerf          #+#    #+#             */
/*   Updated: 2021/04/15 18:06:39 by mdeclerf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*str;
	unsigned char	rep;

	i = 0;
	str = (unsigned char *)b;
	rep = (unsigned char)c;
	while (i < len)
	{
		str[i] = rep;
		i ++;
	}
	return (b);
}
