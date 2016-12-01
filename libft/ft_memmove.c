/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkambuyl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/28 16:26:13 by gkambuyl          #+#    #+#             */
/*   Updated: 2016/11/17 12:43:21 by gkambuyl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/libft.h"

void	*ft_memmove(void *str1, const void *str2, size_t n)
{
	size_t			i;
	unsigned char	*dst;
	unsigned char	*src;

	i = 0;
	dst = (unsigned char *)str1;
	src = (unsigned char *)str2;
	if ((str2 < str1) && ((str2 + n) > str1))
	{
		while (n > 0)
		{
			dst[n] = src[n];
			n--;
		}
		dst[n] = src[n];
	}
	else
		while (i < n)
		{
			dst[i] = src[i];
			i++;
		}
	return (dst);
}
