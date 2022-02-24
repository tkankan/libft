/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkankan <tkankan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 04:37:25 by tkankan           #+#    #+#             */
/*   Updated: 2022/02/21 04:37:33 by tkankan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	total;
	void	*ret;

	total = size * count;
	ret = malloc(total);
	if (!(ret))
		return (0);
	ft_memset(ret, '\0', total);
	return (ret);
}
