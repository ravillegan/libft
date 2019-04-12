/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asantiag <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/12 00:25:55 by asantiag          #+#    #+#             */
/*   Updated: 2019/04/12 00:27:18 by asantiag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"
#include <stdlib.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*new;
	char			*tmp;
	unsigned int	i;

	i = 0;
	new = (char *)malloc(ft_strlen(s));
	if (!new)
		return (0);
	tmp = new;
	while (*s)
	{
		*new++ = f(i, *s++);
		i++;
	}
	return (tmp);
}
