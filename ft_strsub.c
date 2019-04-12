/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asantiag <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/12 00:44:59 by asantiag          #+#    #+#             */
/*   Updated: 2019/04/12 01:09:09 by asantiag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char *fresh;

	fresh = (char *)malloc(len + 1);
	if (!fresh)
		return (0);
	fresh = ft_strncpy(fresh, s + start, len);
	return (fresh);
}
