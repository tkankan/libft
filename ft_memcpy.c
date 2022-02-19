/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkankan <tkankan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 11:05:35 by tkankan           #+#    #+#             */
/*   Updated: 2022/02/07 11:20:27 by tkankan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned int	i;
	char			*src1;
	char			*dst1;

	i = 0;
	src1 = (char *)src;
	dst1 = (char *)dst;
	if (!dst && !src)
		return (NULL);
	while (n > i)
	{
		dst1[i] = src1[i];
		i++;
	}
	return (dst);
}
