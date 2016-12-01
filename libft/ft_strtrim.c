/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkambuyl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/17 16:31:16 by gkambuyl          #+#    #+#             */
/*   Updated: 2016/11/17 18:05:52 by gkambuyl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

char	*ft_strtrim(char const *s)
{
	char	*tmp;
	int		i;
	int		j;
	int		k;

	i = 0;
	j = 0;
	k = ft_strlen(s) - 1;
	while (s[k] == ' ' || s[k] == '\t')
		k--;
	while (s[j] == ' ' || s[j] == '\t')
		j++;
	tmp = (char *)malloc(sizeof(char) * (k - j));
	while (j <= k)
	{
		tmp[i] = s[j];
		j++;
		i++;
	}
	tmp[i] = '\0';
	return (tmp);
}
