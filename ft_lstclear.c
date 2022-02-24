/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkankan <tkankan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 14:42:55 by tkankan           #+#    #+#             */
/*   Updated: 2022/02/24 14:42:56 by tkankan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*crr;
	t_list	*next;

	if (!lst)
		return ;
	crr = *lst;
	while (crr)
	{
		next = crr->next;
		ft_lstdelone(crr, del);
		crr = next;
	}
	*lst = NULL;
}
