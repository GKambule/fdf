/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkambuyl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/01 12:03:56 by gkambuyl          #+#    #+#             */
/*   Updated: 2016/12/01 14:33:34 by gkambuyl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int		ft_strlen(const char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

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

char	**ft_strsplit(char *str)
{
	char	**big;
	int		i;
	int		cn;
	int		bcn;
	int		scn;
	int		cas;

	cn = 0;
	cas = 0;
	i = 0;
	bcn = 0;
	scn = 0;
	big = (char **)malloc(sizeof(char *) * (wcount(str) + 1));
	while (i < (ft_strlen(str) + 1))
	{
		if (str[i] != ' ' && str[i] != '\0')
		{
			cn++;
		}
		else if (str[i] == ' ' || str[i] == '\0')
		{
			big[bcn] = (char *)malloc(sizeof(char) * cn + 1);
			while (scn <= cn)
			{
				big[bcn][scn] = str[cas];
				scn++;
				cas++;
			}
			big[bcn][scn] = '\0';
			bcn++;
			cn = 0;
			scn = 0;
		}
		i++;
	}
	return (big);
}

int main()
{
	char	*str;
	char	**tmp;
	int		i;

	i = 0;
	str = "one two three four five six";
	tmp = ft_strsplit(str);
	while(tmp[i])
	{
		printf("%s\n", tmp[i]);
		i++;
	}
	return (0);
}
