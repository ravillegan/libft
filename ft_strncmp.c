/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asantiag <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/11 18:22:55 by asantiag          #+#    #+#             */
/*   Updated: 2019/04/11 23:54:05 by asantiag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	const unsigned char *tmp1;
	const unsigned char *tmp2;

	tmp1 = (const unsigned char *)s1;
	tmp2 = (const unsigned char *)s2;
	while (n--)
		if (*tmp1 != *tmp2)
			return (*tmp1 - *tmp2);
		else
		{
			tmp1++;
			tmp2++;
		}
	return (0);
}
