/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdeclerf <mdeclerf@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 12:36:31 by mdeclerf          #+#    #+#             */
/*   Updated: 2021/04/22 11:12:56 by mdeclerf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	size_t	in_set(char const *set, char c)
{
	size_t	i;

	if (set == NULL)
		return (0);
	i = 0;
	while (i < ft_strlen(set))
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

static	char	*ft_copy(size_t end, size_t start, char const *s1)
{
	size_t	len;
	char	*trimmed;
	int		i;

	len = (end + 1) - start;
	i = 0;
	trimmed = malloc(sizeof(char) * len);
	if (trimmed == NULL)
		return (NULL);
	while (start < end)
	{
		trimmed[i] = s1[start];
		i++;
		start++;
	}
	trimmed[i] = '\0';
	return (trimmed);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	char	*a;

	a = (char *)s1;
	if (s1 == NULL)
		return (NULL);
	if (set == NULL)
		return (a);
	start = 0;
	end = ft_strlen(s1);
	while (s1[start] != '\0' && in_set (set, s1[start]) == 1)
		start++;
	while (end > start && in_set (set, s1[end - 1]) == 1)
		end--;
	return (ft_copy(end, start, s1));
}
