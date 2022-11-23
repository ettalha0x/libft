/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nettalha <nettalha@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 15:20:27 by nettalha          #+#    #+#             */
/*   Updated: 2022/10/20 15:39:51 by nettalha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;

	if (!s)
		return (NULL);
	if (len < ft_strlen(s))
		str = malloc(sizeof(char) * len + 1);
	else
		str = malloc(sizeof(char) * ft_strlen(s) + 1);
	if (!str)
		return (NULL);
	i = 0;
	while (start < ft_strlen(s) && ((char *)s)[start] != '\0' && i < len)
	{
		str[i] = ((char *)s)[start];
		start++;
		i++;
	}
	str[i] = '\0';
	return (str);
}
