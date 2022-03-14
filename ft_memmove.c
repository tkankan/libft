/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkankan <tkankan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 10:04:18 by tkankan           #+#    #+#             */
/*   Updated: 2022/03/04 14:41:49 by tkankan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*dst1;
	unsigned char	*src1;

	dst1 = (unsigned char *)dst;
	src1 = (unsigned char *)src;
	if (!dst && !src)
		return (NULL);
	if (dst1 > src1)
	{
		while (len--)
			dst1[len] = src1[len];
	}
	else
		ft_memcpy(dst1, src1, len);
	return (dst);
}

/*
src ile işaret edilen nesnenin n karakterini dst ile işaret edilen
nesneye kopyalar. Elde edilen nesneyi işaret eden bir pointer
gönderilir. Kopyalama işlemi önce src'nin yerinden bir
geçici diziye ve sonra da geçici diziden dst'nin yerine şeklinde
yapılır. Elde edilen nesneyi işaret eden bir pointer
gönderilir.
*/