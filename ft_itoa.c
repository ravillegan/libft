/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asantiag <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/17 19:00:37 by asantiag          #+#    #+#             */
/*   Updated: 2019/04/17 19:08:38 by asantiag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_itoa(int n)
{
	int		tmp;
	char	*fresh;
	int		size;
	int		flag;

	size = 0;
	flag = 0;
	tmp = n;
	if (n < 0)
	{
		tmp = -n;
		flag++;
	}
	while (tmp / 10)
	{
		tmp %= 10;
		size++;
	}
	fresh = (char *)malloc(size + flag + 1);
	if (!fresh)
		return (0);
	
}