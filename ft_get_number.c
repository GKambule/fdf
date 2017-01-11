/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_number.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkambuyl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/09 09:59:25 by gkambuyl          #+#    #+#             */
/*   Updated: 2016/12/17 11:45:15 by gkambuyl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft/includes/libft.h"

int		wcount(char *str)
{
	int		i;
	int		check;

	i = 0;
	check = 1;
	while (str[i])
	{
		if (str[i] == ' ')
			check++;
		i++;
	}
	return (check);
}

char	*ft_inmalloc(int cn, char *str, int pos)
{
	char	*tmp;
	int		i;

	i = 0;
	tmp = (char *)malloc(sizeof(char) * cn + 1);
	while (i <= cn)
	{
		tmp[i] = str[pos];
		i++;
		pos++;
	}
	tmp[i] = '\0';
	return (tmp);
}

char	**ft_mapsplit(char *str)
{
	char	**big;
	int		i;
	int		cn;
	int		bcn;

	cn = 0;
	i = 0;
	bcn = 0;
	big = (char **)malloc(sizeof(char *) * (wcount(str) + 1));
	while (i < (ft_strlen(str) + 1))
	{
		if (str[i] != ' ' && str[i] != '\0')
		{
			cn++;
		}
		else if (str[i] == ' ' || str[i] == '\0')
		{
			big[bcn] = ft_inmalloc(cn, str, (i - cn));
			bcn++;
			cn = 0;
		}
		i++;
	}
	big[bcn] = NULL;
	return (big);
}

int		ft_2d_strlen(char **str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

t_env		*get_number(char **table, t_env *env)
{
	char	**tmp;
	int		i;
	int		j;

	j = 0;
	while (table[j])
	{
		i = 0;
		tmp = ft_mapsplit(table[j]);
		if (j = 0)
			env->colms = ft_2d_strlen(tmp);
		env->umap[j] = (int *)malloc(sizeof(int) * ft_2d_strlen(tmp));
		while (tmp[i])
		{
			env->umap[j][i] = ft_atoi(tmp[i]);
			i++;
		}
		ft_strdel(tmp);
		j++;
	}
	return (env);
}
