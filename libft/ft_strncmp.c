/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkambuyl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/28 16:23:05 by gkambuyl          #+#    #+#             */
/*   Updated: 2016/11/12 12:29:06 by gkambuyl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	size_t	i;
	size_t	k;

	i = 0;
	k = 0;
	while (str1[i] && str2[k] && str1[i] == str2[k] && k < n - 1)
	{
		i++;
		k++;
	}
	return ((unsigned int)str1[i] - (unsigned int)str2[k]);
}
