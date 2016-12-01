/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkambuyl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/28 16:25:50 by gkambuyl          #+#    #+#             */
/*   Updated: 2016/11/17 12:56:45 by gkambuyl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t			cnt;
	unsigned char	*dest;
	unsigned char	*source;

	cnt = 0;
	dest = (unsigned char *)dst;
	source = (unsigned char *)src;
	while ((cnt < n) && (source[cnt] != (unsigned char)c))
	{
		dest[cnt] = source[cnt];
		cnt++;
	}
	if (cnt < n)
		dest[cnt] = source[cnt];
	if (source[cnt] == (unsigned char)c)
		return (&dest[cnt + 1]);
	return (NULL);
}
