/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asantiag <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/12 01:29:01 by asantiag          #+#    #+#             */
/*   Updated: 2019/04/13 13:13:03 by asantiag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char	*p;
	char	*end;
	char	*fresh;
	char	*start;

	p = (char *)s;
	while (*p && (*p == ' ' || *p == '\t' || *p == '\n'))
		p++;
	if (!(*p))
		return ("");
	start = p;
	while (*p)
		p++;
	p--;
	while (*p == ' ' || *p == '\t' || *p == '\n')
		p--;
	end = p;
	fresh = (char *)malloc(end - start + 1);
	if (!fresh)
		return (0);
	p = fresh;
	while (start <= end)
		*fresh++ = *start++;
	*fresh = '\0';
	return (p);
}
