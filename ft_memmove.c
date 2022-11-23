/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nettalha <nettalha@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 12:27:39 by nettalha          #+#    #+#             */
/*   Updated: 2022/10/21 11:40:52 by nettalha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	if (!src && !dst)
		return (NULL);
	if (dst > src)
	{
		while (n--)
			*(unsigned char *)(dst + n) = *(unsigned char *)(src + n);
	}
	else
		ft_memcpy(dst, src, n);
	return (dst);
}
