/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkambuyl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/28 16:22:40 by gkambuyl          #+#    #+#             */
/*   Updated: 2016/11/11 15:16:52 by gkambuyl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/libft.h"

int		ft_strcmp(const char *str1, const char *str2)
{
	int i;
	int k;

	i = 0;
	k = 0;
	while (str1[i] && str2[k] && (str1[i] == str2[k]))
	{
		i++;
		k++;
	}
	return ((unsigned int)str1[i] - (unsigned int)str2[k]);
}
