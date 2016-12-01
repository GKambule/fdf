/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkambuyl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/28 16:25:36 by gkambuyl          #+#    #+#             */
/*   Updated: 2016/11/20 13:39:58 by gkambuyl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/libft.h"

void	*ft_memcpy(void *str1, const void *str2, size_t n)
{
	size_t			i;
	size_t			k;
	unsigned char	*dst;
	unsigned char	*src;

	i = 0;
	k = 0;
	dst = (unsigned char *)str1;
	src = (unsigned char *)str2;
	while (i < n)
	{
		dst[i] = src[k];
		i++;
		k++;
	}
	return (dst);
}
