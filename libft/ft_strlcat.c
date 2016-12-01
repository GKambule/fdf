/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkambuyl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/28 16:31:49 by gkambuyl          #+#    #+#             */
/*   Updated: 2016/11/11 15:19:40 by gkambuyl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/libft.h"

int		ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	k;
	size_t	j;

	j = ft_strlen(dst);
	k = 0;
	i = 0;
	while (dst[k])
	{
		k++;
	}
	if (k < size - 1)
	{
		while (src[i] && k < size - 1)
		{
			dst[k] = src[i];
			k++;
		}
		dst[k] = '\0';
	}
	else if (k > size)
	{
		return (size + ft_strlen(src));
	}
	return (j + ft_strlen(src));
}
