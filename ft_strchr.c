/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aba-nabi <aba-nabi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 17:47:02 by aba-nabi          #+#    #+#             */
/*   Updated: 2021/12/28 19:39:53 by aba-nabi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	c = c % 128;
	while (1)
	{
		if (s[i] == c)
			return ((char *)s);
		else if (s[i] && s[++i] == c)
			return (&((char *)s)[i]);
		if (!((char *)s)[i])
			return (NULL);
	}
	return (NULL);
}
