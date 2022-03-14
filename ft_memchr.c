/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkankan <tkankan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 03:57:41 by tkankan           #+#    #+#             */
/*   Updated: 2022/03/04 14:43:10 by tkankan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	index;

	if (n == 0)
		return (NULL);
	index = 0;
	while (index < n && (((unsigned char *)s)[index] != (unsigned char)c))
	{
		if (index == n - 1)
			return (NULL);
		index++;
	}
	return (&((unsigned char *)s)[index]);
}

/*
s ile işaretlenen nesnenin ilk n karakterinde, c nin ilk
göründüğü yeri belirler (unsigned char a dönüştürerek).
Eğer c bulunursa, nesnedeki c ye bir pointer gönderilir. Aksi
halde 0 gönderilir.
*/