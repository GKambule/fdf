/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkambuyl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/17 14:31:24 by gkambuyl          #+#    #+#             */
/*   Updated: 2016/11/17 14:33:05 by gkambuyl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/libft.h"

int	ft_strequ(char const *s1, char const *s2)
{
	int res;

	res = ft_strcmp(s1, s2);
	if (res == 0)
		return (1);
	return (0);
}
