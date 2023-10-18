/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kde-deus <kde-deus@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 12:36:52 by kde-deus          #+#    #+#             */
/*   Updated: 2023/10/10 12:55:12 by kde-deus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')
		|| (c >= '0' && c <= '9'))
	{
		return (1);
	}
	return (0);
}
/*
int main()
{
	char *c = "hO-lA 1-21 ñ";
	int i = 0;

	while (c[i] != '\0')
	{
		if (ft_isalnum(c[i]))
		{
			printf("%c es alfanumerico. \n", c[i]);
		}
		else
		{
			printf("%c no es alfanumerico. \n", c[i]);
		}
		i++;
	}
	return (0);
}*/
