/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkambuyl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/02 13:10:26 by gkambuyl          #+#    #+#             */
/*   Updated: 2016/11/21 08:45:27 by gkambuyl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/libft.h"

char	*ft_itoa(int nbr)
{
	long int		num;
	char			*tmp;
	char			*cmp;
	int				neg;

	num = nbr;
	neg = 1;
	cmp = ("0123456789");
	if (!(tmp = (char *)malloc(sizeof(char) * 12)))
		return (NULL);
	if (nbr == 0)
		return ("0");
	if (nbr < 0)
		num = -num;
	*tmp = '\0';
	while (num > 0)
	{
		*--tmp = cmp[num % 10];
		num /= 10;
	}
	if (nbr < 0)
		*--tmp = '-';
	return (tmp);
}
