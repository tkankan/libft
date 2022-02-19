/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkankan <tkankan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 14:16:18 by tkankan           #+#    #+#             */
/*   Updated: 2022/02/19 14:28:05 by tkankan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include "limits.h"

int	ft_atoi(const char *str)
{
	int	result;
	int	negative;
	int	i;

	result = 0;
	negative = 1;
	i = 0;
	while ((str[i] >= '\t' && str[i] <= '\r')
		|| str[i] == ' ')
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			negative *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		if (i > INT_MAX)
		{
			return (0);
		}
		if (i < INT_MIN)
		{
			return (0);
		}
		result = (str[i] - '0') + (result * 10);
		i++;
	}
	return (result * negative);
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {
   int val;
   char str[20];

   strcpy(str, "--98993489");
   val = ft_atoi(str);
   printf("Yazı değer = %s, Sayı değer = %d\n", str, val);

   strcpy(str, "-24484748210");
   val = ft_atoi(str);
   printf("Yazı değer = %s, Sayı değer = %d\n", str, val);

   return(0);
}
