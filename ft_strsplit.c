/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asantiag <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/13 13:13:50 by asantiag          #+#    #+#             */
/*   Updated: 2019/04/13 15:51:33 by asantiag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <string.h>

char	**ft_strsplit(char const *s, char c)
{
	char	**p;
	size_t	n;
	char	*tmp;
	int		i;
	char	**ret;

	i = 0;
	tmp = (char *)s;
	while (*tmp)
		if (*tmp++ == c)
			i++;
	p = (char **)malloc(sizeof(char *) * i + 1);
	if (!p)
		return (0);
	ret = p;
	while (*s)
	{
		i = 0;
		n = 0;
		tmp = (char *)s;
		while (*tmp && *tmp != c)
		{
			n++;
			tmp++;
		}
		*p = (char *)malloc(sizeof(char) * n + 1);
		if (!(*p))
			return (0);
		while (*s && *s != c)
			*(*p)++ = *s++;
		**p = '\0';
		if (*s == c)
			s++;
		p++;
	}
	*p = 0;
	return (ret);
}
