/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkambuyl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/17 14:22:25 by gkambuyl          #+#    #+#             */
/*   Updated: 2016/11/17 14:24:36 by gkambuyl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	int		cnt;
	size_t	size;
	char	*new;

	cnt = 0;
	size = ft_strlen(s);
	if (!(new = (char *)malloc(sizeof(char) * (size + 1))))
		return (NULL);
	while (s[cnt])
	{
		new[cnt] = f(s[cnt]);
		cnt++;
	}
	new[cnt] = '\0';
	return (new);
}
