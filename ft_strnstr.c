/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asantiag <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/11 14:00:19 by ctammi            #+#    #+#             */
/*   Updated: 2019/04/20 03:50:27 by asantiag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*tmp;
	char	*tmp2;
	size_t	l;

	if (!len)
		return (0);
	if (!(*needle))
		return ((char *)haystack);
	while (*haystack && len)
	{
		tmp = (char *)haystack;
		tmp2 = (char *)needle;
		l = len;
		while (*haystack && *tmp2 && *haystack == *tmp2 && l)
		{
			haystack++;
			tmp2++;
			l--;
		}
		if (!(*tmp2) && l)
			return (tmp);
		len--;
		haystack = tmp + 1;
	}
	return (0);
}
