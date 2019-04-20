/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asantiag <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/19 18:15:45 by asantiag          #+#    #+#             */
/*   Updated: 2019/04/20 03:02:08 by asantiag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int	numsize(int k)
{
	int size;

	size = 0;
	if (k < 0)
		size++;
	while (k / 10)
	{
		size++;
		k /= 10;
	}
	size++;
	return (size);
}

char		*ft_itoa(int n)
{
	char	*fresh;
	int		size;
	int		i;
	int		k;
	int		fl;

	fl = 1;
	i = 0;
	fresh = (char *)malloc(numsize(n) + 1);
	if ((size = numsize(n)) && n < 0)
	{
		fresh[0] = '-';
		i++;
		fl = -1;
	}
	k = size;
	size--;
	while (size >= i)
	{
		fresh[size] = n % 10 * fl + 48;
		n /= 10;
		size--;
	}
	fresh[k] = '\0';
	return (fresh);
}
