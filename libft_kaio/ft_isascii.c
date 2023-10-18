/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kde-deus <kde-deus@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 12:56:41 by kde-deus          #+#    #+#             */
/*   Updated: 2023/10/10 13:32:56 by kde-deus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
	{
		return (1);
	}
	return (0);
}
/*
int main()
{
	char *c = "Q1@3#!lNñ - _ += '' g 	w / ., ";
	int i = 0;

	while (c[i] != '\0')
	{
		if (ft_isascii(c[i]))
		{
			printf("%c est en la tabela. \n", c[i]);
		}
		else
		{
			printf("%c no esta en la tabela. \n", c[i]);
		}
		i++;
	}
	return (0);
}*/
