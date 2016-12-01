/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkambuyl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/28 16:24:00 by gkambuyl          #+#    #+#             */
/*   Updated: 2016/11/11 15:02:16 by gkambuyl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/libft.h"

int		ft_atoi(const char *str)
{
	int i;
	int neg;
	int num;

	i = 0;
	neg = 1;
	num = 0;
	while (str[i] == '\t' || str[i] == ' ')
		i++;
	if (str[i] >= 43 && str[i] <= 57)
	{
		if (str[i] == '-')
		{
			neg = -1;
			i++;
		}
		if (str[i] == '+')
			i++;
		while (str[i] >= 48 && str[i] <= 57)
		{
			num = (num * 10) + str[i] - '0';
			i++;
		}
	}
	return (num * neg);
}
