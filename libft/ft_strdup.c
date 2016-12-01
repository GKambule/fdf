/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkambuyl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/28 14:44:13 by gkambuyl          #+#    #+#             */
/*   Updated: 2016/11/20 13:26:55 by gkambuyl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/libft.h"

char	*ft_strdup(const char *str)
{
	int		i;
	int		k;
	char	*tmp;

	i = 0;
	k = 0;
    tmp = (char *)malloc(sizeof(char) * (ft_strlen(str) + 1));
	if (!tmp)
		return (NULL);
	while (str[i])
	{
		tmp[k] = str[i];
		i++;
		k++;
	}
	tmp[i] = '\0';
	return (tmp);
}
