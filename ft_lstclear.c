/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nettalha <nettalha@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 13:08:19 by nettalha          #+#    #+#             */
/*   Updated: 2022/10/19 13:17:48 by nettalha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*lst1;
	t_list	*tlst;

	lst1 = *lst;
	while (lst1)
	{
		tlst = lst1->next;
		del(lst1->content);
		free(lst1);
		lst1 = tlst;
	}
	*lst = NULL;
}
