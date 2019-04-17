/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asantiag <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/12 22:47:10 by asantiag          #+#    #+#             */
/*   Updated: 2019/04/16 11:51:53 by asantiag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


//# define MISSING while (*s == c) s++;
#include <stdlib.h>
#include "libft.h"
#include <string.h>

char	**ft_strsplit(char const *s, char c)
{
	size_t	n;
	char	**p;
	char	*tmp;
	size_t	i;
	char	**ret;
	
	n = 0;
	tmp = (char *)s;
	while (*tmp)
	{
		if (*tmp == c && *(tmp - 1) != c && *(tmp + 1) != c)
			n++;
		tmp++;
	}
	p = (char **)malloc(n + 1);
	if (!p)
		return (0);
	ret = p;
	while (n-- + 1)
	{
		i = 0;
		tmp = (char *)s;
		while (*tmp++ != c)
			i++;
		if (i == 0)
			continue ;
		*p = (char *)malloc(i + 1);
		if (!(*p))
			return (0);
		*p = ft_strncpy(*p, s, i);
		s += i;
		**p = '\0';
	}
	*p = NULL;
	return (ret);
}
