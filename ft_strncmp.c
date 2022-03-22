/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdeclerf <mdeclerf@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 16:00:03 by mdeclerf          #+#    #+#             */
/*   Updated: 2021/04/15 18:02:25 by mdeclerf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	const unsigned char	*string1;
	const unsigned char	*string2;
	unsigned int		nb;
	int					i;

	string1 = (const unsigned char *)s1;
	string2 = (const unsigned char *)s2;
	nb = (unsigned int) n;
	i = 0;
	while (nb > 0)
	{
		if (string1[i] == '\0' || string2[i] == '\0')
			return (string1[i] - string2[i]);
		if (string1[i] != string2[i])
		{
			if (string1[i] > string2[i])
				return (1);
			else
				return (-1);
		}
		nb--;
		i++;
	}
	return (0);
}
