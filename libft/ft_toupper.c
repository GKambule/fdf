/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkambuyl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/28 16:50:38 by gkambuyl          #+#    #+#             */
/*   Updated: 2016/11/13 14:59:20 by gkambuyl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/libft.h"

int	ft_toupper(int c)
{
	int i;

	i = c;
	if (c >= 97 && c <= 122)
	{
		i = c - 32;
	}
	return (i);
}
