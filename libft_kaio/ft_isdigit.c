/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kde-deus <kde-deus@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 14:36:38 by kde-deus          #+#    #+#             */
/*   Updated: 2023/10/10 15:11:15 by kde-deus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int n)
{
	if (n >= '0' && n <= '9')
	{
		return (1);
	}
	return (0);
}
/*
int main()
{
	int *n = "43'4'5";
	int i = 0;

	while (n[i] != '\0')
	{
		if (ft_isdigit(n[i]))
		{
			printf("%c esto es un numero.\n", n[i]);
		}
		else
		{
			printf("%c no es un numero.\n", n[i]);
		}
		i++;
	}
	return (0);
}*/
