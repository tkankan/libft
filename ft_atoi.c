/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkankan <tkankan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 14:16:18 by tkankan           #+#    #+#             */
/*   Updated: 2022/02/25 14:44:00 by tkankan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include "limits.h"

int	ft_atoi(const char *str)
{
	unsigned long	result;
	int				negative;
	int				i;

	result = 0;
	negative = 1;
	i = 0;
	while ((str[i] >= '\t' && str[i] <= '\r') || str[i] == ' ')
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			negative *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = (str[i] - '0') + (result * 10);
		i++;
	}
	if (result > LONG_MAX && negative == -1)
		return (0);
	if (result > LONG_MAX && negative == 1)
		return (-1);
	return (result * negative);
}
