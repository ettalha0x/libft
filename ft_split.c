/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nettalha <nettalha@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 18:30:39 by nettalha          #+#    #+#             */
/*   Updated: 2022/10/20 13:01:49 by nettalha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	countwords(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i] && s[i] != c)
			count++;
		while (s[i] && s[i] != c)
			i++;
	}
	return (count + 1);
}

int	countletter(const char *s, char c)
{
	int	i;

	i = 0;
	while (s[i] != '\0' && s[i] != c)
		i++;
	return (i + 1);
}

char	**ft_split(const char *s, char c)
{
	char	**ptr;
	int		i;
	int		j;

	ptr = malloc((countwords(s, c)) * sizeof(char *));
	if (!ptr)
		return (NULL);
	i = 0;
	while (*s != '\0')
	{
		while (*s != '\0' && *s == c)
			s++;
		if (*s)
		{
			ptr[i] = malloc(countletter(s, c) * sizeof(char));
			j = 0;
			while (*s != '\0' && *s != c)
				ptr[i][j++] = *s++;
			ptr[i][j] = '\0';
			i++;
		}
	}
	ptr[i] = NULL;
	return (ptr);
}
