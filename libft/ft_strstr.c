/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkambuyl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/28 16:32:40 by gkambuyl          #+#    #+#             */
/*   Updated: 2016/11/14 13:56:37 by gkambuyl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/libft.h"

char	*ft_strstr(const char *s1, const char *s2)
{
	int i;
	int k;
	int j;

	i = 0;
	k = 0;
	j = 0;
	while (s1[i])
	{
		if (s1[i] == s2[k])
		{
			j = i;
			while (s1[j] && s2[k] && s1[j] == s2[k])
			{
				j++;
				k++;
			}
			if (s2[k] == '\0')
				return ((char *)s1 + i);
			else
				k = 0;
		}
		i++;
	}
	return (NULL);
}
