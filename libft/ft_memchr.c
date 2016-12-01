/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkambuyl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/28 16:26:32 by gkambuyl          #+#    #+#             */
/*   Updated: 2016/11/17 12:51:35 by gkambuyl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			cnt;
	unsigned char	*str;

	cnt = 0;
	str = (unsigned char *)s;
	while ((cnt < n) && (str[cnt] != (unsigned char)c) && str[cnt])
		cnt++;
	if (str[cnt] == (unsigned char)c)
		return (&str[cnt]);
	return (NULL);
}
