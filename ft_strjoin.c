/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdeclerf <mdeclerf@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 10:41:24 by mdeclerf          #+#    #+#             */
/*   Updated: 2021/04/14 16:24:15 by mdeclerf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*join(char const *s1, char const *s2, char	*cat, size_t i)
{
	if (cat == NULL || s1 == NULL || s2 == NULL)
		return (NULL);
	while (*s1 != '\0')
	{
		cat[i] = *s1;
		s1++;
		i++;
	}
	while (*s2 != '\0')
	{
		cat[i] = *s2;
		s2++;
		i++;
	}
	cat[i] = '\0';
	return (cat);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len;
	size_t	i;
	char	*cat;

	if (s1 == NULL)
		return ((char *)s2);
	if (s2 == NULL)
		return ((char *)s1);
	len = ft_strlen(s1) + ft_strlen(s2);
	i = 0;
	cat = malloc(sizeof(char) * (len + 1));
	if (cat == NULL)
		return (NULL);
	return (join(s1, s2, cat, i));
}
