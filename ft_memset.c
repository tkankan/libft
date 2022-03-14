/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkankan <tkankan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 17:20:21 by tkankan           #+#    #+#             */
/*   Updated: 2022/03/04 14:46:55 by tkankan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*ptr;

	ptr = b;
	while (len-- > 0)
	{
		*ptr++ = c;
	}
	return (b);
}

/*
b ile işaretlenen nesnenin ilk c karakterine, c (unsigned
char a dönüştürür) yi kopyalar. Elde edilene bir pointer
gönderir.
*/