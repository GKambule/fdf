/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkambuyl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/17 13:44:07 by gkambuyl          #+#    #+#             */
/*   Updated: 2016/11/17 13:51:20 by gkambuyl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/libft.h"

void	*ft_memalloc(size_t size)
{
	unsigned char *sz;

	if (!(sz = (unsigned char *)malloc(sizeof(unsigned char) * size)))
		return (NULL);
	ft_bzero(sz, size);
	return (sz);
}
