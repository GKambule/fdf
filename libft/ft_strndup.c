/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkambuyl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/11 11:19:03 by gkambuyl          #+#    #+#             */
/*   Updated: 2016/11/12 12:25:54 by gkambuyl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/libft.h"

char	*ft_strndup(const char *s1, size_t n)
{
	size_t	i;
	size_t	k;
	size_t	j;
	char	*tmp;

	i = 0;
	k = 0;
	j = n;
	tmp = (char *)malloc(sizeof(char) * ft_strlen(s1) + 1);
	while (s1[i] && i < j)
	{
		tmp[k] = s1[i];
		i++;
		k++;
	}
	tmp[k] = '\0';
	return (tmp);
}
