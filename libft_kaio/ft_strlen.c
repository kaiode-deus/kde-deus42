/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kde-deus <kde-deus@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 15:41:14 by kde-deus          #+#    #+#             */
/*   Updated: 2023/10/10 15:47:42 by kde-deus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *n)
{
	size_t	i;

	i = 0;
	while (n[i] != '\0')
	{
		i++;
	}
	return (i);
}
/*
int main()
{
	char *c = "hola mijhgjg hgjhentee43";

	printf("%zu", ft_strlen(c));
	return (0);
}*/
