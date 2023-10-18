/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kde-deus <kde-deus@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 15:29:25 by kde-deus          #+#    #+#             */
/*   Updated: 2023/10/10 15:36:43 by kde-deus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
	{
		return (1);
	}
	return (0);
}
/*
int	main(void)
{
	char *c = "d 	Eñ-_+)(*&^%##@!~?/><.,|\';l)";
	int i = 0;

	while (c[i] != '\0')
	{
		if (ft_isprint(c[i]))
		{
			printf("%c es printable.\n", c[i]);
		}
		else
		{
			printf("%c no es.\n", c[i]);
		}
		i++;
	}
	return (0);
}*/
