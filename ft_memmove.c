/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asantiag <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/11 18:21:01 by asantiag          #+#    #+#             */
/*   Updated: 2019/04/11 19:05:52 by asantiag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*d;
	const unsigned char	*s;
	unsigned char		*tmp;

	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	tmp = (unsigned char *)malloc(len);
	ft_memcpy(tmp, s, len);
	ft_memcpy(d, tmp, len);
	free(tmp);
	return (dst);
}
