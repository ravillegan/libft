/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asantiag <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/11 18:20:39 by asantiag          #+#    #+#             */
/*   Updated: 2019/04/11 19:05:46 by asantiag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char *a;
	char *b;

	a = (char *)src;
	b = (char *)dst;
	while (n > 0)
	{
		*b = *a;
		a++;
		b++;
		n--;
	}
	return (dst);
}
