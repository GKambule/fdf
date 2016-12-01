/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkambuyl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/28 16:33:00 by gkambuyl          #+#    #+#             */
/*   Updated: 2016/11/13 11:41:16 by gkambuyl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (little == NULL || ft_strlen(little) == 0)
		return ((char *)big);
	while (big[i])
	{
		if (big[i] == little[j])
		{
			while (i < len && little[j])
			{
				if (big[i] == little[j++])
					i++;
				else
					break ;
			}
			if (little[j] == '\0')
				return ((char *)little);
		}
		i++;
	}
	return (NULL);
}
