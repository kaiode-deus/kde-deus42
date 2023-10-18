/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kde-deus <kde-deus@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 11:10:41 by kde-deus          #+#    #+#             */
/*   Updated: 2023/10/12 13:57:14 by kde-deus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	sinbolos;
	int	result;

	i = 0;
	sinbolos = 0;
	result = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	if (str[i] == '-' && sinbolos == 0)
	{
		i++;
		sinbolos++;
	}
	if (str[i] == '+' && sinbolos == 0)
		i++;
	while (str[i] >= '0' && str[i] <= '9')
		result = (result * 10) + (str[i++] - 48);
	if (sinbolos == 1)
		result *= -1;
	return (result);
}
/*
int	main(int c, char **v)
{
	if (c == 2)
	{
		printf("%d", ft_atoi(v[1]));
	}
	return (0);
}*/
