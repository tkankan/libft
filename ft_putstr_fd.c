/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkankan <tkankan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 20:27:05 by tkankan           #+#    #+#             */
/*   Updated: 2022/02/23 20:27:06 by tkankan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int	index;

	if (s != NULL)
	{
		index = 0;
		while (s[index])
		{
			ft_putchar_fd(s[index], fd);
			index++;
		}
	}
}
