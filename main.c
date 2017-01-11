/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkambuyl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/13 09:34:30 by gkambuyl          #+#    #+#             */
/*   Updated: 2016/12/14 16:22:03 by gkambuyl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

int main(int ac, char **av)
{
	t_env	env;
	char	*tmp;

	tmp = NULL;
	if (ac == 2)
	{
		tmp = av[1];
		readfile(tmp, &env);
		ft_var_int(&env, tmp);
	}
	return (0);
}
