/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nettalha <nettalha@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 20:32:19 by nettalha          #+#    #+#             */
/*   Updated: 2022/10/08 15:55:30 by nettalha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_intlen(int n)
{
	int	i;
	int	m;

	m = n;
	i = 0;
	while (m != 0)
	{
		m = m / 10;
		i++;
	}
	if (n > 0)
		return (i);
	else if (n == 0)
		return (1);
	else
		return (i + 1);
}

char	*ft_itoa(int n)
{
	char	*str;
	long	m;
	int		i;

	m = n;
	i = ft_intlen(m);
	str = malloc(i + 1);
	if (!str)
		return (0);
	str[i] = '\0';
	if (m == 0)
		str[0] = '0';
	else if (m < 0)
	{
		str[0] = '-';
		m *= -1;
	}
	while (m != 0)
	{
		str[i - 1] = (m % 10) + 48;
		m = m / 10;
		i--;
	}
	return (str);
}
