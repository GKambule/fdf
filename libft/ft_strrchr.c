/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkambuyl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/28 16:32:23 by gkambuyl          #+#    #+#             */
/*   Updated: 2016/11/13 12:43:50 by gkambuyl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int i;
	int k;

	k = ft_strlen(str) - 1;
	i = 0;
	while (str[k] > 0)
	{
		if (str[k] == c)
		{
			return ((char *)str + k);
		}
		k--;
	}
	return (NULL);
}
