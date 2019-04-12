/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asantiag <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/11 19:00:48 by asantiag          #+#    #+#             */
/*   Updated: 2019/04/11 19:04:24 by asantiag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(const char *str)
{
	int res;
	int fl;
	int i;

	res = 0;
	fl = 1;
	i = 0;
	while (str[i] < '0' || str[i] > '9')
	{
		if (str[i] == '-' || str[i] == '+')
			break ;
		if (str[i] == 9 || str[i] == 10 || str[i] == 11 || str[i] == 12
				|| str[i] == 13 || str[i] == 32)
			i++;
		else
			return (0);
	}
	if (str[i] == '-')
		fl = -1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
		res = res * 10 + str[i++] - '0';
	return (res * fl);
}
