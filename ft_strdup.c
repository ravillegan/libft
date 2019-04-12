/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asantiag <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/11 18:22:06 by asantiag          #+#    #+#             */
/*   Updated: 2019/04/11 19:06:16 by asantiag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int			len;
	char		*s2;
	char		*tmp;
	const char	*tmp2;

	len = 0;
	tmp2 = s1;
	while (*tmp2++)
		len++;
	s2 = (char *)malloc(len + 1);
	tmp = s2;
	while (len--)
		*tmp++ = *s1++;
	*tmp = '\0';
	return (s2);
}
