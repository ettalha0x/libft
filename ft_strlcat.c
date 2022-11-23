/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nettalha <nettalha@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 09:57:29 by nettalha          #+#    #+#             */
/*   Updated: 2022/10/25 09:41:27 by nettalha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	d;
	size_t	s;
	size_t	j;

	i = 0;
	d = ft_strlen(dst);
	s = ft_strlen(src);
	j = d;
	if (dstsize <= d || !src)
		return (dstsize + s);
	else
	{
		while (src[i] && j < dstsize - 1)
		{
			dst[j] = src[i];
			i++;
			j++;
		}
	}
	dst[j] = '\0';
	return (d + s);
}

// int	main()
// {
// 	char d[] = "1234";
// 	char s[] = "5678";
// 	printf("zu", ft_strlcat(d, s, 2));
// }
