/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkambuyl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/17 14:28:17 by gkambuyl          #+#    #+#             */
/*   Updated: 2016/11/17 14:30:29 by gkambuyl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	cnt;
	size_t			size;
	char			*new;

	cnt = 0;
	size = ft_strlen(s);
	if (!(new = (char *)malloc(sizeof(char) * (size + 1))))
		return (NULL);
	while (s[cnt])
	{
		new[cnt] = f(cnt, s[cnt]);
		cnt++;
	}
	new[cnt] = '\0';
	return (new);
}
