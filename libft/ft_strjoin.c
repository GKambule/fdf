/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkambuyl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/17 16:13:40 by gkambuyl          #+#    #+#             */
/*   Updated: 2016/11/17 16:29:50 by gkambuyl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*tmp;
	int		i;
	int		k;
	int		len;

	i = 0;
	k = 0;
	len = ft_strlen(s1) + ft_strlen(s2);
	tmp = (char *)malloc(sizeof(char) * len + 1);
	while (s1[i])
	{
		tmp[i] = s1[i];
		i++;
	}
	while (s2[k])
	{
		tmp[i] = s2[k];
		i++;
		k++;
	}
	tmp[i] = '\0';
	return (tmp);
}
