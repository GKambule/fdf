/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkambuyl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/28 16:26:53 by gkambuyl          #+#    #+#             */
/*   Updated: 2016/11/17 12:49:32 by gkambuyl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			cnt;
	unsigned char	*str1;
	unsigned char	*str2;

	cnt = 0;
	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	while ((cnt < n) && (str1[cnt] == str2[cnt]))
	{
		cnt++;
	}
	if (cnt == n)
		return (0);
	return (int)((unsigned int)str1[cnt] - (unsigned int)str2[cnt]);
}
