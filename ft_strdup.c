/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nettalha <nettalha@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 22:07:38 by nettalha          #+#    #+#             */
/*   Updated: 2022/10/05 12:21:44 by nettalha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*s2;
	size_t	i;

	i = ft_strlen(s1) + 1;
	s2 = (char *)malloc(sizeof(char) * i);
	if (!s2)
		return (NULL);
	ft_memcpy(s2, s1, i);
	return (s2);
}
