/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkankan <tkankan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 04:05:06 by tkankan           #+#    #+#             */
/*   Updated: 2022/03/04 14:42:29 by tkankan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	index;

	if (n == 0)
		return (0);
	index = 0;
	while (index < (n - 1))
	{
		if (((unsigned char *)s1)[index] != ((unsigned char *)s2)[index])
			break ;
		index++;
	}
	return (((unsigned char *)s1)[index] - (((unsigned char *)s2)[index]));
}

/*
s1 ve s2 ile işaret edilen nesnelerin ilk n karakterlerini
karşılaştırır. Fonksiyon, s1 s2 ye eşit, küçük eşit veya
büyük eşit ise sırası ile 0 , negatif veya pozitif değer gönderir.
*/