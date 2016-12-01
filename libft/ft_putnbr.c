/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkambuyl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/20 11:39:20 by gkambuyl          #+#    #+#             */
/*   Updated: 2016/11/20 13:16:46 by gkambuyl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/libft.h"

static void	ft_ptnbr(long int n)
{
	if (n < 0)
	{
		write(1, "-", 1);
		n = n * -1;
	}
	if (n >= 10)
	{
		ft_ptnbr(n / 10);
		ft_ptnbr(n % 10);
	}
	else
		ft_putchar(n + '0');
}

void	ft_putnbr(int n)
{
	long int num;

	num = n;
	ft_ptnbr(num);
}
