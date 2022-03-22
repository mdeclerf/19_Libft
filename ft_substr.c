/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdeclerf <mdeclerf@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 09:41:25 by mdeclerf          #+#    #+#             */
/*   Updated: 2021/04/20 13:29:40 by mdeclerf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned int	malloc_len(char const *s, size_t len)
{
	unsigned int	malloc_len;

	if (len > ft_strlen(s))
	{
		malloc_len = ft_strlen(s) + 1;
		return (malloc_len);
	}	
	else
	{
		malloc_len = len + 1;
		return (malloc_len);
	}	
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	char			*substring;

	i = 0;
	if (s == NULL)
		return (NULL);
	if (start >= ft_strlen(s) || len == 0)
	{
		substring = malloc(sizeof(char));
		if (substring == NULL)
			return (NULL);
		substring[0] = '\0';
		return (substring);
	}	
	substring = malloc(sizeof(char) * malloc_len(s, len));
	if (substring == NULL)
		return (NULL);
	while (s[start] != '\0' && i < len)
	{
		substring[i] = s[start];
		start++;
		i++;
	}
	substring[i] = '\0';
	return (substring);
}
