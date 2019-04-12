/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asantiag <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/11 13:21:20 by ctammi            #+#    #+#             */
/*   Updated: 2019/04/11 23:54:15 by asantiag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c)
{
	char	*tmp;

	tmp = (char *)s;
	while (*s)
	{
		if (*s == (char)c)
			tmp = (char *)s;
		s++;
	}
	if (*s == (char)c)
		return ((char *)s);
	if (*tmp == (char)c)
		return (tmp);
	return (0);
}
